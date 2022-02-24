#include<iostream>
#include<string>

class Account {
    //attributes
    private:
        std::string name {};
        double balance {};

    public:
    //methods-declared inline
    void set_balance(double bal){balance=bal;}
    double get_balance(){return balance;}

    //methods-will be implented outside the class 
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double ammount);

};

void Account::set_name(std::string n){
    name=n;
}
std::string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    //if account get verified
    balance+=amount;

return true;
}

bool Account::withdraw(double amount){
    if(balance>=amount){
         balance-=amount;
    return true;
    }
    else  
        return false;

}

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