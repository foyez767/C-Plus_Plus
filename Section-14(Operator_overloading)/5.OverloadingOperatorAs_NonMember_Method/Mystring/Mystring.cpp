#include "Mystring.h"
#include<iostream>
#include<cstring>

//No-Args Constructor
Mystring::Mystring(){
    str=new char [1];
    *str='\0';
}
//Overloaded Constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str=new char [1];
            *str='\0';
        }else{
            str=new char [strlen(s)+1];
            strcpy(str,s);
        }
    }
//Deep Copy Constructor
Mystring::Mystring(const Mystring &source)
    :str {nullptr}{
        str=new char [strlen (source.str)+1];
        strcpy(str,source.str);
    }
//Move constructor
Mystring::Mystring(Mystring &&source)
    :str{nullptr}{
        this->str=source.str;
        source.str=nullptr;
    }
    //Destructor
Mystring::~Mystring(){
    delete [] str;
}
//Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    if(this->str==rhs.str)
        return *this;
    delete [] this->str;
    str=new char [strlen(rhs.str)+1];
    strcpy(str,rhs.str);

    return *this;
}
//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    if(this->str==rhs.str)
        return *this;
    delete [] this->str;
    str=rhs.str;
    rhs.str=nullptr;
     
    return *this;
}
//UPPERCASE
Mystring operator+(const Mystring &obj){
    size_t size {strlen(obj.str)};
    char *string =new char [size+1];
    strcpy(string,obj.str);

    for(size_t i {0};i<size;i++){
        string[i]=toupper(string[i]);
    }
    Mystring temp {string};
    delete [] string;

return temp;
}
//convert lowercase
Mystring operator-(const Mystring &obj){
    size_t size {strlen(obj.str)};
    char *string =new char [size+1];
    strcpy(string,obj.str);

    for(size_t i {0};i<size;i++){
        string[i]=tolower(string[i]);
    }

    Mystring temp {string};
    delete [] string;
return temp;
}
//compare two object
bool operator==(const Mystring &lhs,const Mystring &rhs){

if(strcmp(lhs.str,rhs.str)==0)
    return true;
else
    return false;
}
//Concatenate two object
Mystring operator+(const Mystring &lhs,const Mystring &rhs){
    size_t size {strlen(lhs.str)+strlen(rhs.str)};
    char *string =new char [size+1];

    strcpy(string,lhs.str);
    strcat(string,rhs.str);

    Mystring temp {string};
    delete [] string;
return temp; 
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
