#include<iostream>
#include<string>

class Player{
    private:
        std::string name {"Foyez"};
        int health;
        int xp;
    public:
        //constructor-->>previous way
        // Player(){
        //     name="none";    //use breakpoint to better understand
        //     health=100;
        //     xp=0;
        // }
    //Better WAY
        Player()
            :name {"None"},health{0},xp{0}{ //use breakpoint 
                //constructor body
            }
        Player(std::string name_val);
        Player (std::string name_val,int health_val,int xp_val);
            
};

    Player::Player(std::string name_val)
            :name {name_val},health {0},xp{0}{
                //constructor body
            }
    Player::Player (std::string name_val,int health_val,int xp_val)
            :name {name_val},health {health_val},xp {xp_val}{
                //constructor body
            }


int main(){

    Player empty;   //1st consturctor(NO args) called

    Player foyez {"Foyez"}; //one argument constructor called

    Player frank {"Foyez",100,100}; //three argument constructor called

    return 0;
}