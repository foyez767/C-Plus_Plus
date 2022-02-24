#include<iostream>
#include<string>

class Player{
    private:
        std::string name;
        int health;
        int exp;
    public:
    //methods
        void set_name(std::string nam){
            name=nam;
        }
        std::string get_name(){
            return name;
        }
        //i am declaring a constructor so now c++ will NOt generate  default constructor
    Player (std::string name_val,int health_val,int exp_val ) {
        name=name_val;
        health=health_val;
        exp=exp_val;
    }       

};

int main(){
    // Player foyez;
    Player foyez("Foyez",100,80);
    std::cout<<foyez.get_name()<<std::endl;

    return 0;
}