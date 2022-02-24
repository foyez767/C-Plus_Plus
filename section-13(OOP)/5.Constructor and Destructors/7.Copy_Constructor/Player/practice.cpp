#include<iostream>
#include<string>

class Player{
    private:
        std::string name ;
        int health;
        int xp;
    public:
    //methods
        std::string get_name(){return name; }
        int get_health (){return health;}
        int get_xp(){return xp; }
    //default parameters constructor
    Player(std::string name_val ="none",int health_val=0,int xp_val =0);

    // //Copy constructor
    Player(const Player &source);
    //Destructor
    ~Player(){
        std::cout<<"Destructor called for --"<<name<<std::endl;
    }

};
    //constructor implementation
    Player::Player(std::string name_val,int health_val,int xp_val)
        :name {name_val},health {health_val},xp {xp_val} {
            std::cout<<"Three args constructor called"<<std::endl;
        }

    // //Copy constructor implementation
    Player::Player (const Player &source)   //use breakpoint
        // :name{source.name},health {source.health},xp {source.xp} {
        :Player {source.name,source.health,source.xp}{  //using delegating constructor for  initialization
        std::cout<<"Copy constructors--made copy of "<<source.name<<std::endl;
    }
//regular function to show copy object
void display_player(Player P){  //use breakpoint
    std::cout<<"Name: "<<P.get_name()<<std::endl;
    std::cout<<"Health: "<<P.get_health()<<std::endl;
    std::cout<<"Xp: "<<P.get_xp()<<std::endl;
}


int main(){

    Player empty;

    display_player(empty);

    Player foyez {"Foyez",100};

    display_player(foyez);

    Player new_object (foyez);

    display_player(new_object);

    Player *enemy=new Player("Enemy",1000,1000);

    display_player(*enemy); //enemy is pointer which points to an object

    delete enemy;

    return 0;
}