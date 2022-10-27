#include<iostream>
using namespace std;

//base/parent class
class Account{
    public:
    string name;
    int age;
    void deposit(double bal){
        cout<<bal<<" deposit in your account"<<endl;
    }
    void withdraw(double bal){
        cout <<bal<<" withdraw from your account" <<endl;
    }
    //constructor
    Account()
        :name {"None"},age{0}{

        }
    Account(string nam, int ag)
        :name {nam},age{ag}{

        }
};

//derived / child class
class SavingsAccount : public Account {
    public:
    double int_rate;
    void deposit(double bal){
        cout<<bal<<" deposit in your account:saving's account" <<endl;
    }
    void withdraw(double bal){
        cout<< bal<<" withdraw from your account:saving's account" <<endl;
    }
    SavingsAccount()
        :int_rate {3.0}{

        }
};

int main(){
    cout<<"****************Account********************"<<endl;
    Account acc;
    acc.deposit(500);
    acc.withdraw(100);

    Account *p_acc=new Account {"Foyez",10};
    p_acc->deposit(1000);
    p_acc->withdraw(2000);
    delete p_acc;

    cout<<"************Savings Account************"<<endl;
    SavingsAccount ac;
    ac.deposit(500);
    ac.withdraw(300);

    SavingsAccount *s_ac= new SavingsAccount;
    s_ac->deposit(100);
    s_ac->withdraw(50);

    return 0;
}