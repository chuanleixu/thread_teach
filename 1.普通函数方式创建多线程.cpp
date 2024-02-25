#include <iostream>
#include <string>
#include <thread>

using namespace std;
void print(const string &s) { cout << s << endl; }

int main() { 
    
    
    string s ="hello world";
    
    thread t(print,s);

    t.join();


    return 0; }