//*********Write a program to print the address of the pointer to a variable whose value is input from user.

#include<iostream>
int main(){
    int num {};
    std::cout<<"Num : ";
    std::cin>>num;

    int *pointer {&num};

    std::cout<<"Num is : "<<num<<std::endl;
    std::cout<<"Address is : "<<pointer<<std::endl;

    return 0;
}