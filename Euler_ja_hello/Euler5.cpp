#include <iostream>
using namespace std;

int main(){
    int arv = 1;
    int loendur = 19;
    int i = 1;
    int vastus ;
    
    while(loendur >= 0){
        
        for(i=1;i<=20;i++){
            if(arv%i == 0){
                loendur--;
                vastus = arv;
            }
            else{
                loendur = 19;
            }
        }

        arv++;
    }
        
    cout << "vastus: " << vastus << endl;
    
    return 0 ;
}