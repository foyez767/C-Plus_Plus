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
        // void say_hello()  override{  //so solution is: provide override keyword,then if you forgot/miss something
            //that needed to override a function,you will get a error message
        void say_hello() const override{  
            cout<<"Hello-From Derived class"<<endl;
        }
};

int main()
{
    Base *b= new Base();
    b->say_hello();

    Derived *d= new Derived();
    d->say_hello();

    Base *prob=new Derived();  
    prob->say_hello();       
    

    return 0;
}