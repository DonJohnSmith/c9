#include <iostream>
using namespace std;

void box(int length, int width, int heigth);

int main ()
{
    box(7, 20, 4);
    box(50, 3, 2);
    box(8, 6, 9);
    
    return 0;
}

void box(int length, int width, int heigth){
    cout << "kasti ruumala on " << length * width * heigth << endl;
    
}