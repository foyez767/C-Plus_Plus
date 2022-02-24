//when we define a function,those variable which is declared in parenthesis is called parameter.
//when we call a function,the value is given in parenthesis is called argument

#include<iostream>
#include<string>

void introduce_me (std::string name,std::string city, int age){  //function defination
    std::cout<<"My name is "<<name<<std::endl;
    std::cout<<"I am from "<<city<<std::endl;
    std::cout<<"I am "<<age<<" years old."<<std::endl;
}

int main(){
    // introduce_me("Foyez", "Dhaka", 20);
    // introduce_me("Kader", "Chandpur", 24);
    std::string name{},city{};
    int age {};
    std::cout<<"Enter your name :";
    std::cin>>name;
    std::cout<<"Enter your city :";
    std::cin>>city;
    std::cout<<"Enter your age  :";
    std::cin>>age;
    introduce_me(name,city,age);  //function called
    return 0;
}