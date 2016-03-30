#include "product.h"
#include <vector> 
using namespace std;


int main(){
    // read from file
    
    // end read
    
    Product *box = new Product("kartul", "123654798");
    vector<Product*> productList;
    productList.push_back(box);
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
    }else if(option.compare("info") && number >> 0){
        int number;
        while(number < productList.size() ){
        cout << endl << "enter product number(index): ";
        cin>> number;
        }
        productList[number-1]->getInfo(;)
    }
    //
    //}
    //end menu
    productList[0]->getInfo();
    
    // save objects to file
    //end save
    
}