#ifndef PLAYER_H
#define PLAYER_H
#include<string>


class Player
{
private:
    std::string name {};
    int health{};
    int exp {};
public:
    void set_name(std::string n);
    std::string get_name();
    void set_health (int x);
    int get_health();
    void talk(std::string text_to_say);

};

#endif