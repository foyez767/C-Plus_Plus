//inline functions
#include<iostream>

inline int add_numbers(int x,int y){    //for inline function,you must use inline keyword
    int sum=x+y;
    return sum;
}

int main(){
    int a {10},b{30};
    int total=add_numbers(10,30);     //this will inlined as total=10+30
    std::cout<<"Sum is : "<<total<<std::endl;
    return 0;
}