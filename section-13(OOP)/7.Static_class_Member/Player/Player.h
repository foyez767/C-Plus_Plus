#ifndef PLAYER_H
#define PLAYER_H
#include<string>

class Player{
    private:
        static int num_player ; //I can not initialize it here,
                //Static member variables must be declared in the class and then defined outside of the class.
    //member attributes
        std::string name;
        int health ;
        int xp;
    public:
    //methods
        void set_name(std::string name_val){
            name=name_val;
        }
        std::string get_name(){
            return name;
        }
        int get_health (){return health;}
        int get_xp (){return xp;}
        //Constructor
        Player(std::string name_val="None",int health_val=0,int xp_val=0);
        //Copy constructor
        Player(const Player &source);
        //Destructor
        ~Player();

        //method
        static int get_num_players();   // one thing to remember, because this function is static,
        //it only has access to static variables.It doesn't have access to any object variables, any of these guys name, 
        //health, xp.Those belong to specific objects.Static only belong to the class
      

};

#endif