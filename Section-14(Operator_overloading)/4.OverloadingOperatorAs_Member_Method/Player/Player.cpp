#include "Player.h"
#include<iostream>

Player::Player()
    :name{"none"},health {0},xp {0}{
    std::cout<<"No-arg constructor"<<std::endl;
}
Player::Player(std::string name_val,int health_val,int xp_val)
    :name {name_val},health {health_val},xp {xp_val}{
        std::cout<<"Three arg construtor"<<std::endl;
    }
//Copy constructor
Player::Player(const Player &source)
    :name {source.name},health{source.health},xp {source.xp}{
        std::cout<<"Copy constructor"<<std::endl;
    }
//Move constructor
Player::Player(Player &&source)
    :name {source.name},health{source.health},xp{source.xp}{
        
        std::cout<<"Move constructor"<<std::endl;
}
//Destructor
Player::~Player(){
}
//Methods    
void Player::display(){
    std::cout<<"Name:"<<get_name()<<std::endl;
    std::cout<<"Health:"<<get_health()<<std::endl;
    std::cout<<"XP:"<<get_xp()<<std::endl;
}
//Overloading copy assignment
Player &Player::operator=(const Player &rhs){
    std::cout<<"copy assignment"<<std::endl;
    this->name=rhs.name;
    this->health=rhs.health;
    this->xp=rhs.xp;
return *this;
}
//Overloading move assignment
Player &Player::operator=(Player &&rhs) {
    std::cout<<"Move assignment"<<std::endl;
    this->name=rhs.name;
    this->health=rhs.health;
    this->xp=rhs.xp;
return *this;
}
//comapre two object
bool Player::operator==(const Player &rhs) const {
    if(this->name==rhs.name){
        if(this->health==rhs.health){
            if(this->xp==rhs.xp)
                return true;
        }
    }
return false;   
}

//Increment by operator overloading
