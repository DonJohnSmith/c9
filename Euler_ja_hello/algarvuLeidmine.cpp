#include <iostream>

using namespace std;

int main(){
    
    int number;
    bool TEST;
    TEST = true;
    
    cout <<"Enter an integer:";
    cin>> number;
    for(int i=2; i < number; i++){
        
        if (number%i==0)
        TEST = false;
        break;
    
    }
    
    if (TEST == false){
        cout << number << " is not prime";
    }
    
    else{
        
        cout << number << " is prime";
    }
    
    return (0);
}