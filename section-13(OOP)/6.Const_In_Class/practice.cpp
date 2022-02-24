#include<iostream>
#include<string>

class Player {
    private:
        std::string name {};
        int health {};
        int xp {};
    public:
        void set_name (std::string name_val){
            name=name_val;
        }
        //i am using const keyword here,i am saying the compiler hey bro i can guarantee you this method 
        //won't change anything to my object..so the compiler is happy now..NO ERROR will generate now
        std::string get_name() const {      //const keyword solve problem
        // std::string get_name() {  

            return name;
        }
        //Constructor
        Player(std::string name_val,int health_val,int xp_val);
};

//Constructor Implementation

Player::Player(std::string name_val,int health_val,int xp_val)
    :name {name_val},health {health_val},xp{xp_val} {
    }

//regular function

void display_attributes (const Player &p){
    std::cout<<p.get_name()<<std::endl;
    /*When I call p.get name,as far as p dot get name is concerned, that's a constant 
    It can't change it, right. But there's no way to guarantee that*/
}

int main(){
    const Player foyez {"Foyez",100,10};
    Player frank {"Frank",30,30};
/*Though get_name() function return attributes name, it will 
    generate  an error BECAUSE our object is const,and somehow if I change something in get_name() methods
    this means i am changing my object...compiler will not give you to do that*/
    std::cout<<foyez.get_name()<<std::endl;
    std::cout<<frank.get_name()<<std::endl;

    display_attributes(foyez);   //same think happened here,compiler think i just mistakenly can 
        //change my data that's why whatever i do with this const object,i will get an error
        //but we have solution for that
    display_attributes(frank);  //When I call p.get name,as far as p dot get name is concerned, that's a const.
                                    //It can't change it, right. But there's no way to guarantee that

    // foyez.set_name {"Super"};//this will never happen because my object is constant ,so i don't have any right to
                    //change my object

    
    return 0;
}