#include <iostream>
using namespace std;

int main(){
   
    int summa = 0;
    int i = 0;
    
    
    while(i<1000){
        
        
        if(i%3 == 0 || i%5 == 0){
            summa = summa + i;
        }
        
        i++;
        
    }
    

    
    cout << summa << endl;
    
    return 0;
}