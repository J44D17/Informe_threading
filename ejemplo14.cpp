#include <iostream>
#include <thread>

using namespace std;

void foo(){
    this_thread::sleep_for(chrono::seconds(3));
}
thread executors[100];

int main(){
    for (int i = 0;i < 100;i++){
        if (!executors[i].joinable())
        executors[i] = thread(foo);
    }
}