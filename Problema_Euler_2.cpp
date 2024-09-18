#include <iostream>
using namespace std;

int sumaFibo(){
    int primero{1};
    int segundo{1};
    int auxiliar{0};
    int suma{0};

    while(segundo<4000000){
        if (segundo % 2 == 0){
            suma += segundo;
        }
        auxiliar = segundo;
        segundo += primero;
        primero = auxiliar; 
    }

    return suma;
}

int main(){
    cout<<"La suma de los elementos pares de la serie de Fibonacci es: "<<sumaFibo()<<endl;
}