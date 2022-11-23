#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
    Complex(){real =0;
        img =0;}
        Complex(int a,int b)
            : real {a}, img {b} {}
            
        Complex operator+(const Complex &rhs){
            Complex temp;
            temp.real = (this->real)+rhs.real;
            temp.img = img +rhs.img;
        return temp;
        }
        int getreal(){return real;}
        int getimg (){return img;}
};

int main(){
    Complex c1 (10,2), c2 (5,-5);
    Complex c;
    c = c1+c2;
    cout<< c.getreal() <<endl;
    cout<< c.getimg() <<endl;

    return 0;
}