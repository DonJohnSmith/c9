#include <iostream>
#include <string>
#include <vector>

class Product{
  private:
    std::string pName;
    std::string pNumber;
    Product(){};
  public:
    Product *pNext;
    
    Product(std::string name, std::string number){
        pName = name;
        pNumber = number;
        pNext = NULL;
    }
    // Product(string name, string number) : pName(name), pNumber(number){}
    //
    // See variant töötab ainult cpp-s
    
    void getInfo(){
        std::cout << "Name: " << pName << " : " << pNumber << std::endl;
    }
    
int main(){
    Product *product1 = new Product("P1", "001");
    Product *product2 = new Product("P2", "002");
    
    product1->pNext = product2;
    
    Product *nimekiri = NULL;
    nimekiri = product1;
    
    Product hetkel = nimekiri;
    std::cout << hetkel->getName();
    nimekiri->pNext = product2;
    
    hetkel = hetkel->pNext;
    
    return 0;
}