//Ejemplo constructor y destructor

#include <iostream>
#include <thread>

using namespace std;

class thread_joiner{
    public:
        thread_joiner(thread t): t_(move(t)){ 

        }

        ~thread_joiner(){
            if(t_.joinable()) {
            t_.join();
            }
        }
    private:
        thread t_;
};
