//class member access modifiers
#include<iostream>

class Player{
    private:
    std::string name {};
    int health {};
    int exp {};

    public:
    void talk(std::string text_to_say) {std::cout<<name<<" says "<<text_to_say<<std::endl;}
    bool is_dead ();

};


int main(){

    Player foyez;

    //we set attribute name,health,exp as private so we will no longer available to access them 
    // foyez.name="Foyez";
    // foyez.health=110;

    foyez.talk("Hello there");//talk methods is public..so we have access to use it

    return 0;
}