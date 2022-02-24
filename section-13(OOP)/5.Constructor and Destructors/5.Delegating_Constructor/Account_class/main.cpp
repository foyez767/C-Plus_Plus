#include<iostream>
#include<string>

class Account{
    private:
        std::string name;
        int age;
        double balance;
    public:
        //Constructor
        Account();
        Account(std::string name_val);
        Account (std::string name_val,int age_val,double bal_val);

};
//Constructor Implementation
Account::Account()
    :Account{"none",0,0.0}{

    }
Account::Account(std::string name_val)
    :Account{name_val,0,0.00}{

    }

Account::Account(std::string name_val,int age_val,double bal_val)
    :name {name_val}, age{age_val},balance{bal_val}{

    }

int main(){
    Account empty;
    Account foyez_account {"Foyez"};
    Account frank_account {"Frank",18,1000};
    // Account unknown {"Unknown",18};//Error becuase two arg constructor  is not available


    return 0;
}