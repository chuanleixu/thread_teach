#include <iostream>
#include <string>
#include <thread>

using namespace std;

class thread_guard {
private:
  thread &t;
    public:
        thread_guard(thread &t_):t(t_){}
    ~thread_guard(){
        if(t.joinable()){
            cout<<"~thread_guard"<<endl;
            t.join();
        }
    }
    thread_guard(thread_guard const &) =delete;
    thread_guard &operator=(thread_guard const &) =delete;
};

int main() {

  thread t([](string s) { cout << s << endl; }, "abc");

  thread_guard tg(t);

    // try {
    //   // 业务逻辑代码
    //   throw 123;
    // } catch (...) {
    //   t.join();
    //   cerr << "捕获异常" << endl;
    // }

  return 0;
}