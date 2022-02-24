//scope rules
//example-01
#include<iostream>

int num3{500};       //global variable

int main(){
    int num1 {100};     //local to main
    int num2 {200};     //local to main

        std::cout<<"Local num1 is : "<<num1<<" in main"<<std::endl;
    //block statements create a new level of scope
    {
        int num1 {1000};  //local to block statements
        std::cout<<"Local num1 is : "<<num1<<" in inner block of main."<<std::endl;
        std::cout<<"Inner block of main ,num2 is : "<<num2<<std::endl;
        std::cout<<"Num3 is : "<<num3<<std::endl;
    }
        std::cout<<"Local num1 is : "<<num1<<" in main"<<std::endl;

    return 0;
}
