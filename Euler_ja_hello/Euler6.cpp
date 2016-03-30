#include <iostream>
using namespace std;

int main(){
    int i,j = 0;
    long ruudusumma = 0;
    long summaruut = 0;
    long vahe = 0;
    
    for(i=1; i<=100; i++){
        ruudusumma += i * i;
    }
    
    cout << ruudusumma << endl;
    
    for(i=1; i<=100; i++){
        summaruut += i;
    }
    
    summaruut = summaruut * summaruut;
    
    cout << summaruut << endl;
    
    vahe = summaruut - ruudusumma;
    
    cout << vahe << endl;
    
}