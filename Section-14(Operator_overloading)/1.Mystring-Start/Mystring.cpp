#include<cstring>
#include<iostream>
#include "Mystring.h"
//No arg constructor
Mystring::Mystring()
    :str{nullptr}{
        str=new char [1];   //i am allocating space on the heap and then assign this address to str
        *str='\0';          //dereferencing str and putting null terminator there
    }
//Overloaded constructor
Mystring::Mystring(const char *s)
    :str {nullptr}{
        if(s==nullptr){
            str=new char [1];
            *str='\0';
        }
        else{
            str=new char [strlen(s)+1]; //extra 1 for null terminator
            strcpy(str,s);  //Copying s to str
        }
    }
//Copy Constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str=new char [strlen(source.str)+1];
        strcpy(str,source.str);
}
//Destructor
Mystring::~Mystring(){
    delete [] str;
}
//Methods
/* str is the pointer while *str is the actual info. stored in the pointed position.
Then why( std::cout<<str)shows Foyez...., instead of 1211ACBD(some location):?
Answer::
C++ treats arrays of characters and char * pointer as strings. So when we display an array of characters or a char * pointer name, 
C++ will assume it is a string and display every character until it sees the NULL character.
This behavior is because C++ is backward compatible with C and that's how C works.
If you want to display the address of a char array, use &array_name[0]  
char []==char *ptr==string*/
void Mystring::display() const {
    std::cout<<str<<":"<<get_length()<<std::endl;
}
//length getter
int Mystring::get_length() const {
    return strlen(str);
}
//string getter
    const char *Mystring::get_str() const {
        return str;
    }

