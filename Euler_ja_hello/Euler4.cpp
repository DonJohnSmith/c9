#include<iostream>
using namespace std;

int main() {
        
    long number = 0;
    long tagur = 0;
    int i, j = 0;
    long abi = 0;
    long suurim = 0;
    
    
    for(i=100; i<=999; i++){
        for(j=100; j<=999; j++){
            number = i * j;
            abi = number;
            
            while( number!= 0 ){      // kirjutan numbri tagurpidi
                tagur = tagur * 10;
                tagur = tagur + number%10;
                number = number/10;
            }
            
            if(abi == tagur){  // leian palindroomid

                if(suurim < abi){    // leian nende seast suurima
                    suurim = abi;
                }
            }
            
            tagur=0;
                
        }

    }
        
       cout << "Suurim:  "<< suurim << endl;
    return 0;

}