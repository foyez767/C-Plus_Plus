#include<iostream>
#include<vector>
#include "Mystring.h"

int main(){

    Mystring a {"Hello"};   //overloaded constructor for creating object
    a=Mystring {"Hola"};    //overloaded constructor for creating temporary object,then move assignment for assigning temporary object to a,
                            //  then destructor for destroying temporary object
    a="Foyez";  //constructing temporary object bassed on string "Foyez",then assign temporary object using move assignment
                //then destructor for deleting temporary object

//     //***************************
// Mystring empty;             //No-args Constructor
// Mystring larry {"larry"};   //overloaded constructor
// Mystring stooge(larry);     //Deep copy constructor
// Mystring stooges;           //No args constructor

// empty=stooge;   //Copy assignment operator because stooge is a l-value

// empty.display();
// larry.display();
// stooge.display();
// empty.display();

// stooges="Larry,Moe and Curly";  //Overloaded constructor for temporary object then Move assignment for assigning temporary object to stooges,then destructor destryonig temporary object
// stooges.display();


//******************************
// std::vector<Mystring>stooges_vec;

// stooges_vec.push_back("Larray");    //Overloded constructor for creating temporary object ,then move constructor for moving  temporary object resoucces and then destructor for deallocate memory 
// stooges_vec.push_back("Moe");
// stooges_vec.push_back("Curly");

// std::cout<<"===============lopp-1==========="<<std::endl;
// for(const Mystring &s:stooges_vec)
//     s.display();

// std::cout<<"===============lopp-2==========="<<std::endl;
// for(Mystring &s:stooges_vec)
//     s="Changed";    //constructor for creating temporary object based on string "Changed" ,then move assignment 
//     //for assigning temporary object to s and then destructor for deallocate memory

// std::cout<<"===============lopp-3==========="<<std::endl;
// for(const Mystring &s:stooges_vec)
//     s.display();

    return 0;
}