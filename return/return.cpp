#include <iostream>
using namespace std;

long liida(int a, int b){
    return (long)a + (long)b;
}

int main(){
    
    int arv = liida(10,20);
    cout << arv << endl;
    return 0;
}