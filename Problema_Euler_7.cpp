#include <iostream>
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

int primo10001(){
    int posicionPrimo{1};
    int entero{2};
    while (posicionPrimo != 10001){
        entero++;
        if (esPrimo(entero))
            posicionPrimo++;
    }
    return entero;
}

int main(){
    cout<<primo10001();
}
