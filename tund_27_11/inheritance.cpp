#include<vector>
#include <string>
#include <iostream>
using namespace std;

class Shape{
    private:
        enum tyyp{
            KOLMNURK,
            RUUT,
            RISTKYLIK,
            RING
        };
        tyyp kujundityyp;
        int A;
        
    public:
        Shape(){
            A = 0;
        }
        virtual int area() = 0;
        void getType(){
            switch(kujundityyp){
                case KOLMNURK: cout << "kolmnurk" << endl;
                break;
                case RUUT: cout << "ruut" << endl;
                break;
                case RISTKYLIK: cout << "ristkülik" << endl;
                break;
                case RING: cout << "ring" << endl;
                break;
            }
    }
    friend class Square;
    friend class Triangle;
    
};

class Square : public Shape{
    public:
        Square(){}
        Square(int kylg){
            A = kylg;
            kujundityyp = RUUT;
        }
        int area(){
            return A*A;
        }
};

/*
class Rectangle : public Square{
    public:
    Rectangle(){
        kujundityyp = RISTKYLIK;
    }
};
*/
class Triangle : public Shape{
    private:
        int B;
    public:
        int area(){
            return (A*B)/2;
        }
        
        Triangle(int x, int y){
            A = x;
            B = y;
            kujundityyp = KOLMNURK;
        }
};

int main(){
    
    vector<Shape*> nimekiri;
    
    Shape *ruut = new Square(5);
    nimekiri.push_back(ruut);
    
    Triangle *kolmnurk = new Triangle(4,8);
    
    Shape *kolmnurk2 = new Triangle(2,4);
    
    ruut->getType();
    cout << ruut->area() << endl;
    
    kolmnurk2->getType();
    cout << kolmnurk2->area() << endl;
    
}