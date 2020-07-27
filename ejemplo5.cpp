//Funciones lambda

#include <iostream>
#include <thread>

using namespace std;
     
int main()
{
    auto lambda = [](int a) { cout << a << endl; };

    thread t1(lambda, 25); 

    t1.join();
     
    return 0;
}