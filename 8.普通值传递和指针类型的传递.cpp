#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

void func(string s1, string *s2) {

    this_thread::sleep_for(chrono::microseconds(10000));
  cout << "s1:" << &s1 << endl;
  cout << "s2:" << s2 << endl;
}

int main() {

  string s1("abc");
  string *s2 = new string("bcd");
  cout << "main s1:" << &s1 << endl;
  cout << "main s2:" << s2 << endl;
  thread t(func, s1, s2);
  t.detach();
  delete s2;
  s2 = NULL;
  return 0;
}