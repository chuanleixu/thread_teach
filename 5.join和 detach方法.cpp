#include <chrono>
#include <iostream>
#include <string>
#include <thread>

using namespace std;

void print(const string &s) {

  this_thread::sleep_for(chrono::microseconds(10000));
  cout << "hello thread!" << endl;
  cout << s << endl;
}

int main() {
  cout << "main thread begin!" << endl;
  string s = "hello world";
  thread t(print, s);

  t.detach();
  if (!t.joinable()) {
    cout << "already joined" << endl;
  } else {
    cout << "not joined" << endl;
  }
  cout << "main thread end!" << endl;

  return 0;
}