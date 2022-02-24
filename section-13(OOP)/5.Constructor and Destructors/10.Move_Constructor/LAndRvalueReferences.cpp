//&--l_value reference
//&&--r_value reference
#include<iostream>

int main(){
    int x {10};
    int &l_ref=x;
    l_ref=100;
    // int &l_ref=10;   //10 is a r_value,But l_ref is a reference to an l_value

    std::cout<<x<<std::endl;    //100
    std::cout<<l_ref<<std::endl;    //100
    std::cout<<&x<<std::endl;   //address of x
    std::cout<<&l_ref<<std::endl;   //address of l_ref == address of x


    int &&r_ref=10; //r_ref is a r_value references
    r_ref=100;  //r_ref has an address,that's why we can assign here otherwise imagine 10=100?It will surely generate
                //a compiler error but r_ref has an address this is why it doesn't generate any error
                //we are assigning 100 to that location
    x=r_ref;
    // int &&r_ref=x;

    std::cout<<r_ref<<std::endl;    //r_ref is a reference to a r_value
    std::cout<<&r_ref<<std::endl;   //address of r_ref
    /*WHAT?How can a r_value has an address?
    We know that r_value is not addressable on memory location...Yeah it's true...BUT Here we have a r_value references
    When we provide an r_value references,it acctually hold a memory address and then on that location we can
    store our r_value*/

    // std::cout<<&&r_ref<<std::endl;
    std::cout<<x<<std::endl;

    int ref=r_ref;
    std::cout<<ref<<std::endl;

    return 0;
}