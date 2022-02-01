#include <cassert>
#include <iostream>

using namespace std;

class MyStack {
public:
    MyStack() {

    }

    void push(int x) {
      // FIXME
    }

    int pop() {
      // FIXME
      return -1;
    }

    int top() {
      // FIXME
      return -1;
    }

    bool empty() {
      // FIXME
      return false;
    }
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
