// //***example-02::local variable
//A variable defined inside a function (defined inside function body between braces) is called a local variable or automatic variable.
//Its scope is only limited to the function where it is defined. In simple terms, local variable exists and can be accessed only inside a function.
//The life of a local variable ends (It is destroyed) when the function exits.

#include<iostream>

int num {100};  //global variable-declared outside any function or class

void local_example (int x){
    int num {1000};         //local to local_example function
    std::cout<<"local num is : "<<num<<" in local example-start"<<std::endl;
    num=x;
    std::cout<<"Local num is : "<<num<<" in local example-end"<<std::endl;
}

int main(){
    int num {10};  //local to main function
    int num2 {20};
    local_example(num);
    local_example(num2);
    return 0;
}