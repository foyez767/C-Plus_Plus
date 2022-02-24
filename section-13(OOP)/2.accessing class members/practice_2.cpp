#include<iostream>

class Account{
    public:
    std::string name {};
    int age {};
    double balance {};

    void deposit(double bal){balance+=bal;std::cout<<"In deposit"<<std::endl;}
    void withdraw(double bal){balance-=bal;std::cout<<"In withdraw"<<std::endl;}

};

int main (){

Account foyez_account;  //creating object
//accessing class members
foyez_account.name = "Foyez";  
foyez_account.age=18;
foyez_account.balance=1000;
foyez_account.withdraw(200);

//allocating space dynamically
Account *frank_account {nullptr};
frank_account=new Account;

(*frank_account).name="Frank";
(*frank_account).age=20;
frank_account->balance=2000;

(*frank_account).deposit(2000);
frank_account->withdraw(3000);


return 0;
}