#include<iostream>
#include "Player.cpp"

int main(){
    
    Player empty;                     //No-args Constructor
    Player foyez {"Foyez",100,0};   //Overloaded constructor
    Player foyez_dupli {foyez};     //copy constructor
    Player frank;                   //No-args constructor
    frank = Player {"Frank",100,10};//three arg constructor for creating temporary object then move assignment for assigning
    frank.display();

    std::cout<<std::boolalpha;
    std::cout<<(foyez==foyez_dupli)<<std::endl;
    std::cout<<(foyez==frank)<<std::endl;

    return 0;
}