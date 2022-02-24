//***example-04::static local variable
//Keyword static is used for specifying a static variable. 
//A static local variable exists only inside a function where it is declared (similar to a local variable) 
//but its lifetime starts when the function is called and ends only when the program ends.
//The main difference between local variable and static variable is that, the value of static variable preserved the end of the program.

//***why we should use static identifier insted of global variable??
//2 because it's retaining its value, but its scope is local.
//3.So you don't have the same problems that you have with global variables,
//4.global variable are visible throughout the program and any piece of code could change it.
//5.In this case(after using static), if this number variable right here gets a really strange value
//6.the only place they could have gotten it from was inside this function. And you know exactly where to look.

#include<iostream>

int num {100};

void static_local_example(){
    static int num {1000};   //local to static_local_example function
    std::cout<<"\nLocal static num is : "<<num<<" in statice local example-start"<<std::endl;
    num*=2;
    std::cout<<"\nLocal static num is : "<<num<<" in statice local example-end"<<std::endl;

}

int main(){
    int num {10};
    static_local_example();
    static_local_example();
    static_local_example();

}