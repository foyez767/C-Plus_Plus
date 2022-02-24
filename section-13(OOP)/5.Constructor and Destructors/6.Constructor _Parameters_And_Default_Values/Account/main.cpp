#include<iostream>

class Account{
    private:
        std::string name;
        double balance;
    public:
    //Constructor
    Account(std::string name_val ="none",double balance_val=0.00);

};
//Constructor Implementation
Account::Account(std::string name_val,double balance_val)
    :name {name_val},balance {balance_val}{

    }


int main(){
    Account empty;
    Account foyez_account {"Foyez"};
    Account frank_account {"Frank",1000};

    return 0;
}