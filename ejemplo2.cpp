#include <iostream>
#include <thread>

using namespace std;

int suma,multiplicacion;

void sumar(int a, int b){
    suma = a + b;
}
void multiplicar(int m, int n){
    multiplicacion = m * n;
}

int main(){

    int x{5} ,y{8};

    thread t1(sumar,x,y);
    thread t2(multiplicar,x,y);

    t1.join;
    t2.join;

    sumar(x,y);
    multiplicar(x,y);

    cout<<suma<<endl;
    cout<<multiplicacion<<endl;

    return 0;
}

