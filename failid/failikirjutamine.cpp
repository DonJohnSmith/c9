#include <iostream>
#include <fstream>
#include <cstdlib> // #include <stdlib.h>
#include <string>
using namespace std;

int main(){
    ofstream oFile;
    oFile.open("output.txt");
    
    int arv=0;
    int kokku, max;
    string sisse;
    

    
    cout << "Sisesta kui palju arve vaja on" << endl;
    cin >> kokku;
    cout << "Sisesta kui suur on kõige suurem arv" << endl;
    cin >> max;
    
    /*
    Saab sisestada stringi
    
    cin >> sisse;
    kokku =strol(sisse;
    */
    
    for(int i=0; i < kokku; i++){
        arv=rand() % max+1;
        oFile << arv  << " ";
    }
    
    oFile.close();
    
}