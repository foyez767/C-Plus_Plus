#include<iostream>
#include "Mystring.h"

int main(){
    
Mystring larry {"Larry"};
Mystring moe {"Moe"};
Mystring curly;

std::cout<<"Enter third stooges name: ";
std::cin>>curly;

std::cout<<"Three stooges are: "<<larry<<" "<<moe<<" "<<curly<<std::endl;

std::cout<<"Enter three stooges name separated by space: ";
std::cin>>larry>>moe>>curly;

std::cout<<"Three stooges are: "<<larry<<" "<<moe<<" "<<curly<<std::endl;



    return 0;
}