#include<iostream>
using namespace std;

class Base
{
    private:
        int value;
    public:
        Base():value{0} {cout<<"Default constructor called for Base class"<<endl;}
        Base(int x):value {x} {cout<<"Parameter(int) Constructor called for Base class"<<endl;}
        ~Base(){cout<<"Destructor called for Base class"<<endl;}
};

class Derived : public Base
{
    // using Base:: Base;
    private:
        int double_val;
    public:
        Derived() 
        :Base(), double_val {0}{    //see the difference
            cout<<"Default constructor called for Derived class"<<endl;
            }

        Derived(int x)
        : Base {x}, double_val {x*2} {  //see the difference
        cout<<"Parameter(int) constructor called for Derived Class"<<endl;
        }
        // Derived(int x)
        // : double_val {x*2},Base {x} {  //see the difference
        // cout<<"Parameter(int) constructor called for Derived Class"<<endl;
        // }
        ~Derived(){cout<<"Destructor called for Derived Class"<<endl;}
};

int main()
{
    Derived d;
    Derived d1 (100); 
    


    return 0;
}