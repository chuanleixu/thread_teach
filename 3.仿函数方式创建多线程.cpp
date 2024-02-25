#include <iostream>
#include <string>
#include <thread>

using namespace std;
class MyThread {
public:
  void operator()() { cout << "hello world!" << endl; }
};

int main() {

  cout << "main begin" << endl;

  MyThread mt;
  thread t(mt);

  t.join();
  cout << "main end" << endl;

  return 0;
}