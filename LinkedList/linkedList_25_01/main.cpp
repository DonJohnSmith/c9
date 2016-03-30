#include <iostream>
#include "linkedlist.h"

int main(){
    OpilaneList *nimekiri = new OpilaneList();
    nimekiri->lisaOpilane("Jaanus","38705122732");
    nimekiri->lisaOpilane("mina","38705167889");
    nimekiri->lisaOpilane("Tema","38705345722");
    nimekiri->eemaldaOpilane(2);
    nimekiri->prindiNimekiri();
}