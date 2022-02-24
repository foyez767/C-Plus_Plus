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
        //constructor
        Player(){
            name="none";
            health=100;
            exp=0;
        }
        Player (std::string name_val,int health_val,int exp_val ) {
            name=name_val;
            health=health_val;
            exp=exp_val;
        }     

};

int main(){
    Player foyez;
    foyez.set_name("Foyez");
    std::cout<<foyez.get_name()<<std::endl;

    Player frank("Frank",100,10);
    std::cout<<frank.get_name()<<std::endl;

    return 0;
}