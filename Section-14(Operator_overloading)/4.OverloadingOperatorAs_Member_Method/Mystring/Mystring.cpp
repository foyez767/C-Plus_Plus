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
//convert upper case
Mystring Mystring::operator+() const{
    size_t size = strlen(this->str);
    char *string=new char [size+1];

    for(size_t i {0};i<size;i++){
        string [i]=toupper(this->str [i]);
    }
    Mystring temp {string};
    delete [] string;
return temp;
}
//convert to lowercase
Mystring Mystring::operator-() const{
    size_t size {strlen(this->str)};
    char *string=new char [size+1];     //extra 1 for null terminator

    for(size_t i {0};i<size;i++)
        string[i]=tolower(this->str[i]);

    Mystring temp {string};
    delete [] string;

    return temp;
}
//compare two object
bool Mystring::operator==(const Mystring rhs) const{
/*if(strcmp(this->str,rhs.str)==0)
    return true;
else
    return false;*/
   bool a=strcmp(this->str,rhs.str);
   return a;
    //*** return (strcmp(this->str,rhs.str)==0);
}
//Concatanate
Mystring Mystring::operator+(const Mystring rhs) const{

    size_t size {strlen(this->str)+strlen(rhs.str)+1};
    char *string=new char [size+1];
    strcpy(string,this->str);
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
