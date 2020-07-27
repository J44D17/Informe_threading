#include <iostream>

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

    sumar(x,y);
    multiplicar(x,y);

    cout<<suma<<endl;
    cout<<multiplicacion<<endl;

    return 0;
}

