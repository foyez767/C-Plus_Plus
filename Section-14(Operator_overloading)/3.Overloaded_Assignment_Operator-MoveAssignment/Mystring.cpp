#include<cstring>
#include<iostream>
#include "Mystring.h"
//No arg constructor
Mystring::Mystring()
    :str{nullptr}{
        str=new char [1];   //i am allocating space on the heap and then assign this address to str
        *str='\0';  //dereferencing str and putting null terminator there
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
//Deep Copy Constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str=new char [strlen(source.str)+1];
        strcpy(str,source.str);
}
//Move constructor
Mystring::Mystring(Mystring &&source)
    :str {source.str}{
        source.str=nullptr;
        std::cout<<"Move constructor used"<<std::endl;
    }
//Destructor
Mystring::~Mystring(){
    std::cout<<"Destructor"<<std::endl;
    delete [] str;
}

// //Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"Copy assignment"<<std::endl;
if(this==&rhs)
    return *this;

delete [] this->str;

str=new char [strlen(rhs.str)+1];
strcpy(this->str,rhs.str);
return *this;
}
//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"Move assignment"<<std::endl;
if(this==&rhs)
    return *this;

delete [] this->str;

str=rhs.str;
rhs.str=nullptr;
return *this;
}

//Methods
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
