#include<iostream>

class Player {
    public:
    //attributes
    std::string name {};
    int health {};
    int exp {};
    //methods
    void talk(std::string text_to_say){std::cout<<name<<" says "<<text_to_say<<std::endl;}
    bool is_dead {};

};

int main(){
    //object
    Player foyez;
    //accessing Player class
    foyez.name = "Foyez";
    foyez.health=100;
    foyez.exp=80;

    foyez.talk("Hi there");
    //enemy is NOT player object ,enemy is the pointer of player objects
    Player *enemy =new Player;
    (*enemy).name="Enemy";
    (*enemy).health=200;
    enemy->exp =112;

    enemy->talk("I will kill you");

    delete enemy;



    return 0;
}