#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
        virtual void say_hello() const{
            cout<<"Hello-from Base class"<<endl;
        }
        virtual ~Base(){}

};

class Derived: public Base
{
    public:
        void say_hello(){   //I forgot to give const keyword here,so compiler assume that say_hello() is redefined
                            //here,hence this say hello function is statically binded
            cout<<"Hello-From Derived class"<<endl;
        }
};

int main()
{
    Base *b= new Base();
    b->say_hello();

    Derived *d= new Derived();
    d->say_hello();

    Base *prob=new Derived();   //this is the problem: we expect say hello of derived class but here 
    prob->say_hello();          //say hello of base class got called
    

    return 0;
}