#include <iostream>
#include <cstring>

int main(){
    char *sona = new char; //4byte
    *sona = 'c';
    
    char *sona2 = (char*)malloc(sizeof(char)*10);
    strcpy(sona2, "mina");
    
    std::cout << sona2;
    
    
}