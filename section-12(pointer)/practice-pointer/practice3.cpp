/*Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. 
There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB 
respectively, and display them.*/
#include<iostream>
int main(){
    int a {},b{};
    std::cout<<"Enter a and b respectively : ";
    std::cin>>a>>b;

    int *ptrA {nullptr};
    int *ptrB {nullptr};
    ptrA=&a;
    ptrB=&b;

    std::cout<<"A : "<<*ptrA<<std::endl;
    std::cout<<"B : "<<*ptrB<<std::endl;


    return 0;
}