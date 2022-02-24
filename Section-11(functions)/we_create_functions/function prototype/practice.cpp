#include<iostream>

// function prototype declared before main functions
int sum_numbers(int a,int b);  //prototype syntax :data_type function_name(datatype1,datatype2...)
// int sum_numbers(int,int ); 

int main(){
    int a{},b{};
    std::cout<<sum_numbers(a,b);  /// calling the function 
    return 0;
}
        // function definition
int sum_numbers(int a,int b)
    {
        std::cout<<"enter a and b: ";
        std::cin>>a>>b;
    return a+b;
    }