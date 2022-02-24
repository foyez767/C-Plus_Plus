#include<iostream>
#include "Account.cpp"

int main(){

Account foyez_account;
    foyez_account.set_name("Foyez's account");
    foyez_account.set_balance(1000);

    if(foyez_account.deposit(500))
        std::cout<<"Deposit OK"<<std::endl;
    else
        std::cout<<"Verify your account!"<<std::endl;

    if(foyez_account.withdraw(500))
        std::cout<<"Withdrawl OK"<<std::endl;
    else
        std::cout<<"Not sufficient ammount"<<std::endl;
    if(foyez_account.withdraw(5000))
        std::cout<<"Withdrawl OK"<<std::endl;
    else
        std::cout<<"Not sufficient ammount"<<std::endl;

return 0;
}