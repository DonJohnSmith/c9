#include <iostream>
using namespace std;

int main(){
    
    long algarv  = 600851475143;
    int jalg = 1;
    int muutuja = 0;

    for(jalg; jalg <= algarv; jalg++ ){

        
        
        if(algarv % jalg == 0){
            algarv = algarv / jalg;
            cout << algarv << endl;
            muutuja = jalg;
            jalg = 1;

        }

        
    }
    
    cout << "suurim: ";
    cout << muutuja << endl;
    
    return 0 ;
    
}