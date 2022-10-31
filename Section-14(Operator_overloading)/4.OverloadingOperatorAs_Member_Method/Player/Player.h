#ifndef PLAYER_H
#define PLAYER_H
#include<string>


class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        //Methods
        std::string get_name(){return name;}
        int get_health(){return health;}
        int get_xp(){return xp;}
    //Constructor
    Player();
    Player(std::string name_val,int health_val,int xp_val);
    //Copy constructor
    Player(const Player &source);
    //Move constructor
    Player(Player &&source);
    //Destructor
    ~Player();
    //overloading copy assignment
    Player &operator=(const Player &rhs);
    //Overloading move assignment
    Player &operator=(Player &&rhs);
    //compareing two object attrubutes by opeerator overloading
    bool operator==(const Player &rhs) const;
    //Methods
    void display();

};

#endif