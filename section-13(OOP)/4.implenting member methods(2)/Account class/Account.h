#ifndef ACCOUNT_H
#define ACCOUNT_H
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

#endif