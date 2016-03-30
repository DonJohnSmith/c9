#include <iostream>
using namespace std;

int main(){
    
    int summa  = 0;
    int fibo = 0;
    int a = 1;
    int b = 1;

    for(fibo;fibo < 4000000; fibo = a + b ){
       fibo = a + b;
        if(fibo%2 == 0){
            summa = summa + fibo;

        }
        
        a = b;
        b = fibo;
        
    }
    
    cout << summa << endl;
    
    return 0 ;
    
}