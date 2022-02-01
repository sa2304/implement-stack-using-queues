#include <cassert>
#include <iostream>
#include <queue>

using namespace std;

class MyStack {
  template <class Q>
  void moveAllButLast(Q& src, Q& dest) {
    while (1 < src.size()) {
      dest.push(src.front());
      src.pop();
    }
  }

 public:
  MyStack() {

  }

  void push(int x) {
    if (data_in_q1) {
      q1.push(x);
    } else {
      q2.push(x);
    }
  }

  int pop() {
    int retval;
    if (data_in_q1) {
      moveAllButLast(q1, q2);
      retval = q1.back();
      q1.pop();
    } else {
      moveAllButLast(q2, q1);
      retval = q2.back();
      q2.pop();
    }
    data_in_q1 = not data_in_q1;

    return retval;
  }

  int top() {
    return (data_in_q1) ? q1.back() : q2.back();
  }

  bool empty() {
    return (data_in_q1) ? q1.empty() : q2.empty();
  }

 private:
  queue<int> q1;
  queue<int> q2;
  bool data_in_q1 = true;
};

void TestMyStack() {
  MyStack s;
  s.push(1);
  s.push(2);
  assert(s.top() == 2);
  assert(s.pop() == 2);
  assert(not s.empty());
}

int main() {
  TestMyStack();
  std::cout << "Ok!" << std::endl;
  return 0;
}
