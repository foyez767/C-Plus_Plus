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

void do_withdraw(Account &account,double amount){
    account.withdraw(amount);
}

int main()
{

    Account a;
    Account &ref1= a;
    ref1.withdraw(100);

    Trust t;
    Account &ref2=t;
    ref2.withdraw(100);

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1,1000);
    do_withdraw(a2,1000);
    do_withdraw(a3,1000);
    do_withdraw(a4,1000);

    
    

    return 0;
}