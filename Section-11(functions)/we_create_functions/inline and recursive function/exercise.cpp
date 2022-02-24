#include<iostream>

double money_after_day(int day,double first_money){
    if(day==1)
        return first_money;
    
 double total= money_after_day(day,first_money*=2);
    
return total;
}

int main(){ 
    double first_money {1};
    int day {4};
    // std::cout<<"Your first day money? ";
    // std::cin>>first_money;
    // std::cout<<"For how many days? ";
    // std::cin>>day;

    double total_amount=money_after_day(day,first_money);
    std::cout<<total_amount;
}