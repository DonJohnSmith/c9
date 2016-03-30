#include<iostream>
using namespace std;

int main() {
        
    int number = 0;
    int tagur = 25;
    int i, j = 0;
    int abi = 0;
    
    
        for(i=1; i<=20; i++){
            for(j=1; j<=20; j++){
                number = i * j;
                abi = number;
                cout << number << endl;
                

                
                if(number == tagur){
                    break;
                }
    
                
               // cout << tagur << endl;
            }
                            if(number == tagur){
                    break;
                }
            
        }
        
     //  cout << "Tagurpidi:  "<<tagur << endl;
       return 0;

}