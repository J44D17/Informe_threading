#include <future>
#include <iostream>

using namespace std;

unsigned int cuadrado(unsigned int i){
    return i*i;
}

int main() {
    auto f = async(launch::async, cuadrado, 8);
    cout << "El resultado es:" << f.get() << '\n'; 
}