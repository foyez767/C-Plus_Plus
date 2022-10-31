#include<iostream>
#include "Number.cpp"

int main(){
    Number foyez {10,20};
    Number frank {10,30};

    std::cout<<std::boolalpha;
    std::cout<<(foyez==frank);
    Number sum ;
    sum=foyez+frank;
    
    return 0;
}