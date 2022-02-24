#include<iostream>
#include<string>
#include "Player.cpp"

int main(){
    Player player_acount;

    std::string name{};
    std::cout<<"Your name?";
    getline(std::cin,name);
    
    player_acount.set_name(name);
    std::cout<<"Player name : "<<player_acount.get_name()<<std::endl;

    player_acount.set_health(100);
    std::cout<<"Health : "<<player_acount.get_health()<<std::endl;

    player_acount.talk("Welcome");

    return 0;
}