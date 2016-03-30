#include "product.h"
#include <vector> 
#include <fstream>
#include <string>
#include <iostream>
using namespace std;


vector<Product*> insertElement(string iName, string iNumber, vector<Product*> productList){
    
    cout <<  "Enter product name: ";
    cin >> iName;
    cout <<  "Enter product number: ";
    cin >> iNumber;
    Product *pa = new Product(iName,iNumber);
    productList.push_back(pa);
    cout << "New product entered successfully" << endl;
    return productList;
}

int main(){
    
    
    // give the user a menu
    //string option;
    //while(!(option.compare("quit"))){
    // cout << "enter command (insert,delete,print,info,quit): ";
    // cin >> option;
    // if(option.compare("print")){
    //  for(int i = 0, i<productList.size(),i++){
    
    //        productList->getInfo();
    //        cout << endl;
    //  }
    //}else if(option.compare("insert")){
    //    string name, number;
    //    cout << endl; << "Enter product name: ";
    //    cin >> name;
    //    cout << endl << "Enter product number";
    //    cin >> number;
    //    Product *newProduct = new Product(name,number);
    //    productList.push_back(newProduct);
    //    cout << "New product entered successfully" << endl;
    //}else if(option.compare("delete")){
        //ask for nr
    //}else if(option.compare("info") && number >> 0){
    //    int number;
    //    while(number < productList.size() ){
    //    cout << endl << "enter product number(index): ";
    //    cin>> number;
    //    }
    //    productList[number-1]->getInfo(;)
    //}
    //
    //}
    //end menu
    
    ifstream iFile;
    iFile.open("input.txt");
    
    string  iName, iNumber;
    string option;
    int valik ;
    vector<Product*> productList;    // siin deklareeritakse productList  vector<Product*> on samahea kui Int
    
    while(iFile.good()){
        
        iFile >> iName >> iNumber;                  // loen failist kaks muutujat
        Product *p = new Product(iName, iNumber);   // Tekitan producti nimega(viidaga) klassi p. Ning annan tema väärtusteks iName ja iNumber
        productList.push_back(p);                   // Lükkan Product p productListi
        
    }
    
    iFile.close();
    
        do{
            
             cout << "enter command: \n";
             cout << "1 insert \n";
             cout << "2 delete \n";
             cout << "3 print \n";
             cout << "4 info \n";
             cout << "0 quit \n";
             cin >> valik;
             cout << endl;
         
         switch (valik)
            {
                case 1:
                    
                    productList=insertElement(iName,iNumber,productList);
                    
                    break;
    
                case 2:
                    cout << "delete\n";
                    cout << "\n";
                    break;
                case 3:
                    for(int i = 0; i < productList.size(); i++){
        
                        productList[i]->getInfo();
                        cout << endl;
                        
                    }
                    break;
    
                case 4:
                    cout << "info\n";
                    cout << "\n";
                    break;
    
                case 0:
                {
                    ofstream oFile;
                    oFile.open("input.txt");
                    
                    for(int i=0; i<productList.size();i++){
                        oFile << productList[i]->getname() << " " << productList[i]->getnumber() << endl;
                    }
                    
                    cout << "Edukalt salvestatud" << endl;
                    oFile.close();
                    
                }
                    break;
    
                default: cout << valik << "is not a valid menu item.\n";
    
                    cout << endl;
            }


    }while(valik != 0);
    
    // save objects to file
    //end save
    return 0;
}