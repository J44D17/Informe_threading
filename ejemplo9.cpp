#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int cont;

void incremento() {
  for(int i=0; i<1000; ++i) {
    cont++;
  }
}

int main() {
  for(int i = 0; i < 1000; ++i) {

    cont = 0;

    thread t1 = thread(incremento);
    thread t2 = thread(incremento);

    t1.join(); t2.join();
    if(cont != 2000) {
      cout << i << ": " << cont << endl;
    }
  }
  
  return 0;
}