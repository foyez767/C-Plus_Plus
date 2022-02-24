#include<iostream>
#include "Player.cpp"

void display_active_player(){
    std::cout<<"Active players : "<<Player::get_num_players()<<std::endl;
}

int  main(){
    display_active_player();

    Player foyez {"Foyez"};
    display_active_player();

    Player *enemy =new Player {"Enemy",100,100};
    display_active_player();

    {
        Player frank {"Frank",100};
        display_active_player();
    }

    display_active_player();
    //Frank object is available only this block statement...when we are out from block statement,frank object 
    //are being destroyed
    delete enemy;
    display_active_player();


    return  0;
}