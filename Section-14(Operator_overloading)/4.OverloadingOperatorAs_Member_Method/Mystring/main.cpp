#include<iostream>
#include "Mystring.cpp"

int main(){
    std::cout<<std::boolalpha;
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};

    Mystring stooge=larry;
    larry.display();
    moe.display();

    std::cout<<(larry==moe)<<std::endl;
    std::cout<<(stooge==larry)<<std::endl;

    Mystring larry2=-larry;
    larry2.display();

    Mystring larry3=+larry;
    larry3.display();

    Mystring stooges=larry+"Moe";
    stooges.display();
/* The only limitation to overloading operators as member functions is that the object on the left-hand side
 must be an object of the class you're using.
For example,  this  statement won't compile
since the left-hand side operand("Larry") is not a my string object.*/

    // Mystring stooges_two="Larry"+moe;

    Mystring three_stooges=larry+" "+moe+" "+"Curly";
    three_stooges.display();

    return 0;
}