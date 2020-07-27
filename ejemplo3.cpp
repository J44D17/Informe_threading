//Funciones miembro

#include <iostream>
#include <thread>

using namespace std;
 
class N{
    public:
        void funcion(int a){
            cout << a << '\n';
        }
};
 
int main(){
    N bar;
 
    thread t1{ &N::funcion, &bar, 20 };
  
    t1.join();
 
    return 0;
}