/* if we don't provide/declared  any constructors inside class,
it will provide a system generated
no args constructor(default) that will allow you to create objects.*/

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
        //i am NOT declaring any constructor here but i will able to create Player object since compiler will 
        //generate a default arg constructor which expects nothing(no args)
        

};

int main(){
    Player foyez;
    foyez.set_name("Foyez");
    std::cout<<foyez.get_name()<<std::endl;

    // Player frank("Frank",100,30);
    //default constructor expect no argument,but frank object have 3 argument so it will not compile

    return 0;
}