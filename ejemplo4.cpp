//Objeto functor

#include <iostream>
#include <thread>

using namespace std;

class Bar{
    public:
        void operator()(int a)
        {
            cout << a << '\n';
        }
};
 
int main(){
    Bar bar;
 
    thread t1(bar, 10); 
 
    t1.join();
 
    return 0;
}