/*f you don't provide any constructors, you get a default constructor for free 
And if you provide your own default constructor that's the one that will be used.*/
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
        //here i declared a constructor which expect no argument
        Player(){
            name="none";
            health=100;
            exp=0;
        }

};

int main(){
    Player foyez;
    std::cout<<foyez.get_name()<<std::endl;

    // Player frank("Frank");
    //my constructor type is no arg constructor but frank object has argument ,so i will get compiler error


    return 0;
}