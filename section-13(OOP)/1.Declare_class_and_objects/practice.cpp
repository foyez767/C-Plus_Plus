#include<iostream>
#include<vector>

class Player{
    //attributes
    std::string name {};
    int health {} ;
    int exp {};

    //methods
    void talk(std::string);
    bool is_dead {};

};

int main(){
    //creating objects
    Player frank;
    Player foyez;

    Player players [] {frank,foyez};    //players is an array of Player objects

    std::vector<Player>players_vec {frank}; //players_vec is a collection of Player objects
    players_vec.push_back(foyez);
    
    Player *enemy {nullptr};    //enemy is a pointer to Player object
    enemy=new Player;

    delete enemy;

    return 0;
}