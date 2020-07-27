
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int counter;
mutex mtx;

void increment() {
  for(int i=0; i<1000; ++i) {
    mtx.lock();
    counter++;
    mtx.unlock();
  }
}

int main() {

    for(int i = 0; i < 10000; ++i) {
        
    counter = 0;

    thread t1 = thread(increment);
    thread t2 = thread(increment);
    t1.join(); t2.join();

    if(counter != 2000) {
      cout << i << ": " << counter << endl;
    }
  }
    
  return 0;
}