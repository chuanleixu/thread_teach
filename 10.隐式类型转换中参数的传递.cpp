#include <iostream>
#include <thread>

using namespace std;
class A {
public:
  A(int i_) : i(i_) { cout << "A类默认构造函数" << endl; }
  A(const A &a) {
    i = a.i;
    cout << "A类拷贝构造函数" << endl;
  }
  ~A() { cout << "A类析构函数" << endl; }

private:
  int i;
};

void func(A a) { cout << "hello" << endl; }

int main() {




  int a = 10;

  thread t(func,a);
  t.detach();
  cout << "main结束" << endl;
  return 0;
}