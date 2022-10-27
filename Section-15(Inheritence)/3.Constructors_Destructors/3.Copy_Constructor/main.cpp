#include<iostream>
using namespace std;

class Base
{
    private:
        int value;
    public:
        Base():value{0} {cout<<"Default constructor called for Base class"<<endl;}
        Base(int x):value {x} {cout<<"Parameter(int) Constructor called for Base class"<<endl;}
        //copy constructor

        Base(const Base &obj)
            : value {obj.value}{
                cout<< "Copy constructor is Called for Base Class"<<endl;
            }
        //Destructor
        ~Base(){cout<<"Destructor called for Base class"<<endl;}
};

class Derived : public Base
{
    // using Base:: Base;
    private:
        int double_val;
    public:
        Derived() 
            :Base{}, double_val {0}{    //see the difference
            cout<<"Default constructor called for Derived class"<<endl;
            }

        Derived(int x)
        : Base {x}, double_val {x*2} {  //see the difference
        cout<<"Parameter(int) constructor called for Derived Class"<<endl;
        }
        //Copy Constructor
        Derived(const Derived &obj)
            : Base(obj),double_val {obj.double_val}
            {
                cout<< "Copy constructor for derived class" <<endl;
            }
        ~Derived(){cout<<"Destructor called for Derived Class"<<endl;}
};

int main()
{
    // Base b1 {100};
    // Base b2 {b1};

    Derived d{100};
    Derived d1 {d};
    


    return 0;
}