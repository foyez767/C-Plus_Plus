#include "Player.h"
#include<string>

/*static int num_player is a private attribute so how are we able to access it directly without a function.??
-->If the static attribute is private, then it will only be accessible from a member / friend.
However, C++ will allow us to initialize the private static attribute from outside the class.*/

int  Player::num_player {0};
//Constructor Implementation
Player::Player(std::string name_val,int health_val,int xp_val)
    :name {name_val},health {health_val},xp {xp_val}{
        ++num_player;
    }
//Copy Constructor Implementation
Player::Player(const Player &source)
    :Player {source.name,source.health,source.xp}{

    }
//Destructor Implementation
Player::~Player(){
    --num_player;
}

int Player::get_num_players(){
    return num_player;
}

