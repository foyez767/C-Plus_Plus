// //******example-03::global variable
// If a variable is defined outside all functions, then it is called a global variable.
// The scope of a global variable is the whole program. This means, It can be used and changed at any part of the program after its declaration.
// Likewise, its life ends only when the program ends.
#include<iostream>

int num {100};  //global variable-declared outside any function or class

void global_example (){
    
    std::cout<<"\nGlobal num is : "<<num<<" in local example-start"<<std::endl;
    num*=2;
    std::cout<<"Global num is : "<<num<<" in local example-end"<<std::endl;
}
//Notice the global variable does not get reinitialized every time,
//it only gets initialized that one time when you for the first time callling the function .

int main(){
    int num {10};
    int num2 {20};
    global_example();
    global_example();
    global_example();
    
    return 0;
}