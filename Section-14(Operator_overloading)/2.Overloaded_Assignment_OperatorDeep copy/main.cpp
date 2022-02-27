#include<iostream>
#include<vector>
#include "Mystring.cpp"

int main(){

//     Mystring a {"Hello"};   //overloaded constructor
//     Mystring b;             //No arg constructor
//     b=a;            //Copy assignment

// /**In this case,we have b = "You are the best";  and the compiler will use the code we wrote for operator=
// b.operator=("You are the best"); 
// Since our overloaded assignment operator expects a MyString  object, a temporary object will be created using MyString(const char *) 
// and then this temporary will be used for the assignment.
// Something like this:
// b.operator=(MyString("This is a test")); */

//     b="You are the best";   //we are creating a temporary object first using overloaded constructor and then we are
//     //assigning this temporary object to b using copy assignment


//*************************************
Mystring empty; //No-args Constructor
Mystring larry {"larry"};   //overloaded constructor
Mystring stooge(larry); //Deep copy constructor
Mystring stooges;   //No args constructor

empty=stooge;   //Copy assignment

empty.display();
larry.display();
stooge.display();
empty.display();

stooges="Larry,Moe and Curly";  //Overloaded constructor for temporary object then Copy assignment for assigning
stooges.display();


//******************************
// std::vector<Mystring>stooges_vec;

// stooges_vec.push_back("Larray");    //Overloded constructor for creating temporary object ,then copy constructor for copying temporary object and then destructor for deallocate memory 
// stooges_vec.push_back("Moe");
// stooges_vec.push_back("Curly");

// std::cout<<"===============lopp-1==========="<<std::endl;
// for(const Mystring &s:stooges_vec)
//     s.display();

// std::cout<<"===============lopp-2==========="<<std::endl;
// for(Mystring &s:stooges_vec)
//     s="Changed";    //copy assignment

// std::cout<<"===============lopp-3==========="<<std::endl;
// for(const Mystring &s:stooges_vec)
//     s.display();

    return 0;
}