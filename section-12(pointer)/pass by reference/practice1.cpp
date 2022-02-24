#include<iostream>

int main(){
    int num {10};
    int ref{num};
    std::cout<<"***********************"<<std::endl;
    std::cout<<num<<std::endl;
    std::cout<<ref<<std::endl;

    std::cout<<"\n***********************"<<std::endl;
    num=50;
    std::cout<<num<<std::endl;
    std::cout<<ref<<std::endl;  //though i assign num to 50,but ref still 10,it's because ref is copy of num

    std::cout<<"\n***********************"<<std::endl;
    ref=100;
    std::cout<<num<<std::endl;  //i assign ref to 100,but num is not changing because of copying
    std::cout<<ref<<std::endl;

    //******Example-02:using reference---see the difference
    // int num {10};
    // int &ref{num};  //here ref is not a COPY of num insted ref is an alias to num
    // std::cout<<"***********************"<<std::endl;
    // std::cout<<num<<std::endl;
    // std::cout<<ref<<std::endl;

    // std::cout<<"\n***********************"<<std::endl;
    // num=50;
    // std::cout<<num<<std::endl;
    // std::cout<<ref<<std::endl;  

    // std::cout<<"\n***********************"<<std::endl;
    // ref=100;
    // std::cout<<num<<std::endl;  
    // std::cout<<ref<<std::endl;


    return 0;
}