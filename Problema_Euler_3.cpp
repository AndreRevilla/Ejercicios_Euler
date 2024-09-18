#include <iostream>
using namespace std;

int mayorFactor(long long num){
    int mayor{1};

    int i=2;
    while(i < num){
        if (num % i == 0){
            mayor = i;
        }
        i++;
    }

    return mayor;
}


int main(){
    cout<<"El mayor factor primo de 600851475143 es: "<<mayorFactor(600851475143)<<endl;
}