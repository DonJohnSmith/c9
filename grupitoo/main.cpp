#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string KliendiNimi;
    
    cout << "Sisesta kasutajanimi" << endl;
    getline(cin, KliendiNimi);
    
    cout << KliendiNimi << endl;
    
    int AjaTabel[5][8];
    
    for ( int i = 0; i < 5; i++ )
    {
        cout << "[" << i << "][";
        for ( int j = 0; j < 8; j++ )
        {
            AjaTabel[i][j]=0;
            cout  << j << "]: ";
            cout << AjaTabel[i][j];
        }
        cout << endl;
    }
  //  SisestaAndmed();
  //  AjaKontroll();
  //  SalvestaFaili();
    
    
    
}