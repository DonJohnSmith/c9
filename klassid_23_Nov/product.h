#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

class Product{
  private:
    std::string pName;
    std::string pNumber;
    Product(){};
  public:
    Product(std::string name, std::string number){
        pName = name;
        pNumber = number;
    }
    // Product(string name, string number) : pName(name), pNumber(number){}
    //
    // See variant töötab ainult cpp-s
    
    void getInfo(){
        std::cout << "Name: " << pName << " : " << pNumber << std::endl;
    }
  
};


#endif