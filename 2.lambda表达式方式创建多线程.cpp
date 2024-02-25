#include <iostream>
#include <string>
#include <thread>

using namespace std;

int main() {
  cout << "main begin" << endl;
  thread t(
      [](string s) {
        cout << "hello world!" << endl;
        cout << s << endl;
      },
      "abc");
  t.join();
  cout << "main end" << endl;

  return 0;
}