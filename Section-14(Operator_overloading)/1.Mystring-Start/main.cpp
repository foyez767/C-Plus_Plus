#include<iostream>
#include "Mystring.cpp"

int main(){

    Mystring empty;
    Mystring name {"Foyez"};
    Mystring sub_name {name};

    empty.display();
    name.display();
    sub_name.display();

    return 0;
}