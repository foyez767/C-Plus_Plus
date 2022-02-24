#include<iostream>
#include<string>

class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
    //overloaded constructor 
        Player(){
            name="None";
            health=0;
            xp=0;
        }
        Player(std::string name_val){
            name=name_val;
            health=0;
            xp=0;
        }
        Player(std::string name_val,int health_val,int xp_val){
            name=name_val;
            health=health_val;
            xp=xp_val;
        }
};

int main(){
    //creating objects
    Player frank;  //None,0,0//no arg  constructor called

    Player hero {"Hero"}; //Hero,0,0 //one arg(string) constructor called

    Player foyez {"Foyez",100,1000}; //Foyez,100,1000   //three arg(1string,2int ) constructor called

    Player *enemy=new Player {"Enemy",1000,10};//Enemy,1000,10
    delete enemy;

return 0;

}