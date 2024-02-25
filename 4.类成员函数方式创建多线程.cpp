#include <iostream>
#include <string>
#include <thread>

using namespace std;
class MyThread {
public:
  void print(const string &s) {
    cout << "hello world!" << endl;
    cout << s << endl;
  }
};

int main() {

  cout << "main begin" << endl;

  MyThread mt;

  thread t(&MyThread::print, &mt, "abc");
  t.join();

  cout << "main end" << endl;

  return 0;
}