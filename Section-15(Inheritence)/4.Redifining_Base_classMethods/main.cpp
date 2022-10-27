#include<iostream>
using namespace std;

//base/parent class
class Account{
    private:
        double balance;
    public:
    //Consrtructor
    Account()
        :Account(0){

        }
    Account (double bal)
        :balance {bal}{

        }
    //Methods
    void deposit(double bal){
        balance+=bal;
    }
    void withdraw(double bal){
        if(balance-bal>=0){
            balance-=bal;
            cout<<"Withdraw Successful"<<endl;
        }else cout<< "Insufficient Balance"<<endl;
    }   
    double check_balance(){return balance;}
};

//derived / child class
class SavingsAccount : public Account {
    private:
        double int_rate;
    public:
        //Constructor
        SavingsAccount()
            :SavingsAccount{0,0}{

            }
        SavingsAccount(double bal,double rate)
            :Account(bal),int_rate {rate}{

            }
        //Mehtods
        //Savings account deposit method verison
        void deposit(double bal){
            bal+=(bal*int_rate/100);
            Account::deposit(bal);  //****
        }
        //withdraw and check balance  method is inherited from Account/BAse class   
};

int main(){
    cout<<"*******Account  class********"<<endl;
    Account ac;
    cout<< ac.check_balance() <<endl;
    ac.deposit(100);
    cout<< ac.check_balance() <<endl;
    ac.withdraw(50);
    cout<< ac.check_balance() <<endl;
    cout<< endl;
    cout<<"*******Savings Account class***"<<endl;
    SavingsAccount acc (1000,5);
    cout<< acc.check_balance() <<endl;
    acc.deposit(1000);
    cout<< acc.check_balance() <<endl;
    acc.withdraw(2000);
    cout<< acc.check_balance() <<endl;

    return 0;
}