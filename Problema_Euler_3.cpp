#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int num) {
    int i=2;
    if (num<=1){
        return false;
    }
    while(i < num){
        if (num % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

int mayorFactorPrimo(long long n,int num){
    int mayor{1};
    int i=num;

    while(i > 2){
        if (n % i == 0){
            if (esPrimo(i)){
                mayor = i;
                break;
            }
        }
        i--;
    }

    return mayor;
}

int main(){
    long long n = 600851475143;
    int num = sqrt(n);


    cout<<"El mayor factor primo de 600851475143 es: "<<mayorFactorPrimo(n, num)<<endl;
}
