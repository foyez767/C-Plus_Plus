#include<iostream>

#define MAX(a,b) ((a>b)?a:b)

int main(){
    
    std::cout<<MAX(10,20)<<std::endl;       //20
    std::cout<<MAX(10.30000,0)<<std::endl;  //10.30000
    std::cout<<MAX(10.30,20.45)<<std::endl; //20.45

    return 0;
}