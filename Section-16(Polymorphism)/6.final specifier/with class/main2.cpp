#include<iostream>
using namespace std;

class A 
{
    public:
        void say_hello(){
            cout<<"how are you"<<endl;
        }
};

class B final: public A
{
    public:
        void say_hello(){
            cout<<"How are you"<<endl;
        }
};

class C : public A
{
    //OK
};

// class D:public B
// {
//     //Error the reason is same, I said subclass B is final ,then we can not derived sub class B in future;
// };


int main()
{


    return 0;
}