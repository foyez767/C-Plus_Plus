#include "Mystring.h"
#include<cstring>
#include<iostream>
//No arg constructor
Mystring::Mystring()
    :str {nullptr}{
}
//Overloaded constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        size_t size {strlen(s)};
        str=new char [size+1];
        strcpy(str,s);
    }
//Deep copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str=new char [strlen(source.str)+1];
        strcpy(str,source.str);

}
//Move constructor
Mystring::Mystring(Mystring &&source)
    :str{nullptr}{
        str=source.str;
        source.str=nullptr;
    }
//Destructor
Mystring::~Mystring(){
    delete [] str;
}
//Copy assignment
Mystring &Mystring::operator=(const Mystring &source){
    if(str==source.str)
        return *this;
    
    delete [] str;
    str=new char [strlen(source.str)+1];
    strcpy(str,source.str);

    return *this;
}
//Move assignment
Mystring &Mystring::operator=(Mystring &&source){
    if(str==source.str)
        return *this;

    delete [] this->str;

    str=source.str;
    source.str=nullptr;
return *this;
}
//Overloaded Insertion operator
std::ostream &operator<<(std::ostream &output,const Mystring &rhs){
    output<<rhs.str;
return output;
}
//Overloaded extraction oprator
std::istream &operator>>(std::istream &input,Mystring &rhs){
char *buff =new char [1000];
input>>buff;

rhs=Mystring {buff};
delete [] buff;

return input;
}