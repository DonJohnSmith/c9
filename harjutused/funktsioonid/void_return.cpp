#include <iostream>
using namespace std;

void f();

int main(){
    cout << "before calls\n";
    
    f();
    
    cout << "after calls\n";
    
    return 0;
}

void f(){
    cout << "inside f()\n";
    return; // lõpetab selle programmi
    cout << "Seda ei kuvata";
}