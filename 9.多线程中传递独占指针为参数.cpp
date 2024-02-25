#include <iostream>
#include <memory>
#include <string>
#include <thread>
using namespace std;

void func(unique_ptr<string> up) { cout << *up << endl; }

int main() {

  unique_ptr<string> up1 = make_unique<string>("hello");

  thread t(func, std::move(up1));
  t.join();
  cout << "main" << endl;
  return 0;
}