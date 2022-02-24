//****Write a program to print the address of a variable whose value is input from user.

#include<iostream>

int main(){
    int num {};
    std::cout<<"Num : ";
    std::cin>>num;

    std::cout<<"Value : "<<num<<std::endl;
    std::cout<<"Address: "<<&num<<std::endl;

    return 0;
}