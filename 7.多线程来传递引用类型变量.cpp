#include <iostream>
#include <string>
#include <thread>

using namespace std;

void func(const int &i) { cout << "func中 i的地址为:" << &i << endl; }

int main() {

  int a = 10;
  thread t(func, std::ref(a));

  t.join();
  cout << "a的地址为:" << &a << endl;
  return 0;
}