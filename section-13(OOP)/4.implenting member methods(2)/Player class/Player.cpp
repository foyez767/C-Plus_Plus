#include "Player.h"
#include<iostream>

void Player::set_name(std::string n){
    name=n;
}
std::string Player::get_name(){
    return name;
}
void Player::set_health(int x ){
    health=x;
}
int Player::get_health(){
    return health;
}

void Player::talk(std::string text_to_say){
    std::cout<<text_to_say<<" "<<name<<std::endl;

}