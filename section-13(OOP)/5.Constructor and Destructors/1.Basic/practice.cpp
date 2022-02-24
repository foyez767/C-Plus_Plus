#include<iostream>

class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
        void set_name(std::string my_name){
            name=my_name;
        }
        //overloaded constructor
        Player(){
            std::cout<<"No args constructor called"<<std::endl;
        }
        Player (std::string name){
            std::cout<<"One args constructor called"<<std::endl;
        }
        Player (std::string name,int health,int xp){
            std::cout<<"Three args constructor called"<<std::endl;
        }
        //destructor
        ~Player(){
            std::cout<<"Destructor called for "<<name<<std::endl;
        }
};

int main(){
    {
        Player foyez;
        foyez.set_name("Foyez");
    }
    {
        Player frank {"Frank",100,50};
        frank.set_name("Frank");
        Player hero{"Hero"};
        hero.set_name("Hero");
        Player villian {"Villian"};
        villian.set_name("Villain");
    }
    
    Player *enemy=new Player;
    enemy->set_name("Enemy");
    delete enemy;

    Player *big_boss=new Player("Big boss",1000,100);
    big_boss->set_name("Big boss");
    delete big_boss;

    return 0;
}