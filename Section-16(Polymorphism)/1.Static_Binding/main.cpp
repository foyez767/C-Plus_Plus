#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
        void say_hello(){
            cout<<"Hello-from Base class"<<endl;
        }

};

class Derived: public Base
{
    public:
        void say_hello(){
            cout<<"Hello-From Derived class"<<endl;
        }
};

void greetings(Base &obj)
{
   obj.say_hello();
}

int main()
{
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    greetings(b);
    greetings(d);   //problem
    /*Here d is a object of derived class ,hence the function greeting should call say_hello() version of derived
    class but it is not happening here,It is calling say_hello() methods of base class since in parameter list
    we provide Base &obj, so whatever we are passing ,compiler strict to call Base version
    */

    Base *ptr= new Derived();
    ptr->say_hello();   //problem
    /*
    ptr is a pointer to a Base class, we allocate memory for a derived class and derived has "is-A" relation
    with base hence derived is also a base,so we are not getting compiler error

    But we allocate memory for derived class,so when we are calling say_hello() method ,it should call deriverd
    version,but it is calling base version,that's the problem, 
    */


    return 0;
}