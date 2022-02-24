#include<iostream>
#include<string>

class Player{
    private:
        std::string name {};
        int health;
        int xp;

    public:
        
        Player ();
        Player(std::string name_val);
        Player(std::string name_val,int health_val);
        Player (std::string name_val,int health_val,int xp_val);
            
};
    Player::Player()
            :Player {"None",0,0} {
                std::cout<<"No args constructor"<<std::endl;
            }

    Player::Player(std::string name_val)
            :Player {name_val,0,0} {
                std::cout<<"One args constructor"<<std::endl;
            }
    Player::Player(std::string name_val,int health_val,int xP_val)
            :Player(name_val,health_val,0){
                
            }
        
    Player::Player (std::string name_val,int health_val,int xp_val)
            :name {name_val},health {health_val},xp {xp_val}{
                std::cout<<"Three args constructor "<<std::endl;
            }


int main(){

    Player empty;   

    Player foyez {"Foyez"}; 

    // Player messi {"Messi",30};//error becuase i don't have any constructor who expect two argument
    
    Player frank {"Frank",100,100}; 

    return 0;
}