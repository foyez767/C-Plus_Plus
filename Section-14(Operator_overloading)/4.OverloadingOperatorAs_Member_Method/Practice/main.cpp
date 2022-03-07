#include<iostream>
#include "Student.h"

int main(){
    Student empty;  //No arg constructor
    Student foyez {10,100};  //Overloaded constructor
    Student foyez_dupli(foyez); //Deep Copy constructor
    foyez.display();
    Student frank;  //No arg constructor
    frank=Student {20,200};  //Overloaded constructor for creating temporary object then move assignment for 
        //assigning temporary object to frank,finally destructor called for free up space
    frank.display();

    std::cout<<std::boolalpha;
    std::cout<<(foyez==frank)<<std::endl;       //false
    std::cout<<(foyez==foyez_dupli)<<std::endl; //true

    Student foyezs =(+foyez);   //incrementing foyez object attributes by pass by reference
                                // and then by using deep copy constructor we are initializing foyezs object
    foyezs.display();  
    foyez.display();    
    // (+foyez).display();

    std::cout<<(foyez==foyezs)<<std::endl;  //true
    /*Why it is true?
    because we are doing incrementing using pass by reference,so when we increment foyez it will change the actual value*/
    foyezs=-foyez;  //decrementing foyez object attributes by pass by value that means we are making a copy of
        //foyez object and changing object attributes to this copy and then assign this value using move assignment
        // to foyezs using copy assignment
    foyezs.display();
    foyez.display();
    std::cout<<(foyez==foyezs)<<std::endl;

    
    Student sum_of_attributes=foyez*frank; //[suppose in our class '*' this sign represent sum(+)]
    sum_of_attributes.display();

    
    return 0;
}