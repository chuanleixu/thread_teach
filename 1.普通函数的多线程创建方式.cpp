#include <iostream>
#include <string>
#include <thread>

using namespace std;

void print(const string &s) {
  cout << "hello thread!" << endl;
  cout << s << endl;
}

int main() {
  cout << "main thread begin!" << endl;
  string s = "hello world" ;
  thread t(print,s);

  t.join();
  cout << "main thread end!" << endl;

  return 0;
}