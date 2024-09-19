#include <iostream>
using namespace std;

bool esPalindromo(int n){
    string word = to_string(n);
    string reverso = "";
    int i = word.size() - 1;

    for (i; i>=0 ; i--){
        reverso += word[i];
    }

    return word == reverso;
}

int largestPalindrome(){
    int largest{1};

    for (int i{100}; i<1000 ; i++){
        for (int j{100}; j<1000 ; j++){
            if (esPalindromo(i*j) && i*j>largest)
                largest = i*j;
        }
    }

    return largest;
}

int main(){
    cout<<largestPalindrome();
}
