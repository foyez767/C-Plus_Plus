#include<iostream>
#include<string>

class Player{
    private:
        std::string name {};
        int health;
        int xp;

    public:
        //constructor with default values
        // Player();
        Player (std::string name_val="None",int health_val=0,int xp_val=0);

            
};
   
    Player::Player (std::string name_val,int health_val,int xp_val)
            :name {name_val},health {health_val},xp {xp_val}{
                std::cout<<"Three args constructor "<<std::endl;
            }


int main(){

    Player empty;   //None,0,0

    Player foyez {"Foyez"}; //Foyez,0,0

    Player messi {"Messi",30};//Messi,30,0
    
    Player frank {"Frank",100,100}; //Frank,100,100

    return 0;
}