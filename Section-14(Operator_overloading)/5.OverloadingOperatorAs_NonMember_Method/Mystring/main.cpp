#include<iostream>
#include "Mystring.h"

int main(){
    std::cout<<std::boolalpha;
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};

    Mystring stooge=larry;
    larry.display();
    moe.display();

    std::cout<<(larry==moe)<<std::endl;
    std::cout<<(stooge==larry)<<std::endl;

    Mystring larry2=-larry;
    larry2.display();

    Mystring larry3=+larry;
    larry3.display();

    Mystring stooges=larry+"Moe";
    stooges.display();


    Mystring three_stooges=larry+" "+moe+" "+"Curly";
    three_stooges.display();

    return 0;
}