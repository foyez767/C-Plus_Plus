#include<iostream>
#include<vector>

class Account {
    //attributes
    std::string name {"Account"};
    int age {0};
    double balance {0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);

};


int main(){

    Account frank_account;
    Account foyez_account;

    Account accounts [] {foyez_account,frank_account};

    std::vector <Account> accounts_vec {frank_account};
    accounts_vec.push_back(foyez_account);

    Account *unknown {nullptr};
    unknown=new Account ;
    delete unknown;
    


    return 0;
}