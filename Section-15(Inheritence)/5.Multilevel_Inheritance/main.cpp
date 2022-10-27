#include<iostream>
using namespace std;

class Base
{
    public:
    Base(){
        cout<<"Constructor for Base class is called"<<endl;
    }
    void display(){cout<<"Hellooo Depression"<<endl;}
};

class Derived1: public Base
{
    public:
    Derived1(){
        cout<< "Constructor for Derived-1 class is called" <<endl;
    }
};

class Derived2: public Derived1
{
    public:
        Derived2(){
            cout<< "Constructor for Derived-2 class is called" <<endl;
        }
};
int main()
{
    Base a;
    Derived1 b;
    Derived2 c;

    return 0;
}