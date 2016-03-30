#include <iostream>

using namespace std;

int main(){
    int massiiv[10]={12,4,52,17,9,42,111,75,82,5};
    int vahe = 0;
    bool vahetusop = true;
    int vordlusi = 0;
    
    while(vahetusop){
        vahetusop = false;
        for(int i=0; i<9; i++){
            vordlusi++;
            if(massiiv[i] > massiiv[i+1]){
                vahe = massiiv[i];
                massiiv[i] = massiiv[i+1];
                massiiv[i+1] = vahe;
                vahetusop = true;
            }
        }
    }
    cout << "v6rdusoperatsioone : " << vordlusi << endl;
    for(int i=0; i<10; i++){
        cout << massiiv[i] << " ";
    }
    
}