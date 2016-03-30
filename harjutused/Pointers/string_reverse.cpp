#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char str[] = "this is a test";
    char *start, *end;
    int length;
    char t;
    
    cout << "Original: "<< str <<"\n";
    
    length = strlen(str);
    start = str;   // pointeri stringi algusesse
    end = &str[length-1];  // pointer stringi lõppu
    
    while(start < end){
        // swaps chars
        t = *start;
        *start = *end;
        *end = t;
        
        // liigutab pointereid
        start++;
        end--;
    }
    
    cout << "Reversed: " << str << "\n";
    return 0;
}