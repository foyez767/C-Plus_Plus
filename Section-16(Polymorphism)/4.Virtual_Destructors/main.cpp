#include<iostream>
using namespace std;

class Account
{
    public:
        virtual void withdraw(int x){
            cout<<"In account:withdraw"<<endl;
        }
        virtual ~Account(){
            cout<<"Account: Destructors"<<endl;
        }
};

class Savings: public Account
{
    public:
        void withdraw(int x){
            cout<<"In Savings:withdraw"<<endl;
        }
        ~Savings(){
            cout<<"Savings: Destructor"<<endl;
        }
};

class Checking: public Account
{
    public:
        void withdraw(int x){
            cout<<"In Checking:withdraw"<<endl;
        }
        ~Checking(){
            cout<<"Checking : Destructor"<<endl;
        }
};

class Trust: public Account
{
    public:
        void withdraw(int x){
            cout<<"In Trust: withdraw"<<endl;
        }
        ~Trust(){
            cout<<"Trust: Destrutor"<<endl;
        }
};

int main()
{
    Account *p1=new Account();
    Account *p2=new Savings();
    Account *p3=new Checking();
    Account *p4=new Trust();

    p1->withdraw(100);
    p2->withdraw(100);
    p3->withdraw(100);
    p4->withdraw(100);

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}