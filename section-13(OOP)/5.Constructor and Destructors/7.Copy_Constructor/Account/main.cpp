#include<iostream>
#include<string>

class Account{
    private:
        std::string name;
        double balance;
    public:
    //Methods
        std::string get_name(){return name;}
        double get_balance(){return balance;}
        //Constructor with default parameters
        Account(std::string name_val="none",double balance_val=0);
        //Copy constructor
        Account(const Account &source);
        //Destructor
        ~Account();
};
//Constructor implementation
Account::Account(std::string name_val,double balance_val)
    :name {name_val},balance{balance_val}{
        std::cout<<"Constructor called for "<<name<<std::endl;
    }
//Copy Constructor Implementation
Account::Account(const Account &source)
    :Account {source.name,source.balance}{
        std::cout<<"Copy constructor called for "<<source.name<<std::endl;
    }
    //Destructor implementation
Account::~Account(){
    std::cout<<"Destructor called for "<<name<<std::endl;
}

//REgular function
void display_account(Account p){
    std::cout<<"Name : "<<p.get_name()<<std::endl;
    std::cout<<"Balance: "<<p.get_balance()<<std::endl;
}

int main(){

Account foyez_account {"Foyez",1000};
display_account(foyez_account);

    return 0;
}