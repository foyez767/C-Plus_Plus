#include<iostream>
using namespace std;

class A 
{
    public:
        virtual void say_hello()  {
            cout<<"how are you"<<endl;
        }
};

class B : public A
{
    public:
        void say_hello() final{
            cout<<"How are you"<<endl;
        }
};

class C : public A
{
    public:
        void say_hello(){
            cout<<"how are youu"<<endl;
        }
};

class D: public B{
    public:
        // void say_hello(){
        //     cout<<"Hello"<<endl;
        // }
        /*Error since class D is derived from B,and in class B i said that say_hello() version of class B is
        final hence i can not use this function again in class that is derived from B*/
};



int main()
{


    return 0;
}