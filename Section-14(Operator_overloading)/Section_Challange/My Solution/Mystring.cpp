#include<iostream>
using namespace std;
#include "Mystring.h"
#include<cstring>

//No-arg constructor
Mystring::Mystring()
    :str{nullptr}{}

//Overloaded Constructor
Mystring::Mystring(const char *s)
    :str{nullptr}
    {
        size_t len= strlen(s);
        str= new char [len+1];
        strcpy(str,s);
    }
//Deep copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}
    {
        str=new char [strlen(source.str)+1];
        strcpy(str,source.str);
    }
//Move Constructor
Mystring::Mystring(Mystring &&source)
    :str {nullptr}
    {
        str=source.str;
        source.str=nullptr;
    }
//Destructor
Mystring::~Mystring()
{
    delete [] str;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    if(this==&rhs)
        return *this;
    
    delete [] this->str;

    this->str= new char [strlen(rhs.str)+1];
    strcpy(this->str,rhs.str);
return *this;
}
//Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    if(this==&rhs)
        return *this;
    delete [] this->str;

    this->str= rhs.str;
    rhs.str= nullptr;
return *this;
}
//stream insertion  operator
std::ostream &operator<<(std::ostream &output,const Mystring &rhs)
{
    output<<rhs.str;
return output;
}
//stream exertion opertor
std::istream &operator>>(std::istream &input,Mystring &rhs)
{
    char *buff= new char [strlen(rhs.str)+1];
    input>> buff;

    rhs= Mystring {buff};
    delete [] buff;

return input;
}
//making lowercase
Mystring Mystring::operator-()
{
    size_t len= strlen(this->str);
    char *buff=new char [len+1];
    strcpy(buff,this->str);

    for(size_t i=0; i<len ; i++)
        buff[i]=tolower(buff[i]);
    
    Mystring temp {buff};
    delete [] buff;
return temp;
}
//Making uppercase
Mystring Mystring::operator+()
{
    size_t len= strlen(this->str);
    char *buff= new char [len+1];
    strcpy(buff,this->str);

    for(size_t i=0; i<len ; i++)
        buff[i]=toupper(buff[i]);

    Mystring temp {buff};
    delete []  buff;
return temp;
}
//Compare two string
bool Mystring::operator==(const Mystring &rhs)
{
    if(strcmp(this->str,rhs.str)==0)
        return true;
return false;
}
//Compare two string
bool Mystring::operator!=(const Mystring &rhs)
{
    if(strcmp(this->str,rhs.str)!=0)
        return true;
return false;
}
//Compare two string: s1<s2
bool Mystring::operator<(const Mystring &rhs)
{
    for(size_t i=0; str[i] !='\0' && rhs.str[i]!='\0'; i++)
    {
        if(str[i]<rhs.str[i]){
            return true;
        }else return false;           
    }
return true;
}
//compare two string : s1>s2
bool Mystring::operator>(const Mystring &rhs)
{
    for(size_t i=0; this->str[i] != '\0' && rhs.str[i]!='\0'; i++)
    {
        if(str[i]>rhs.str[i]) return true;
        else return false;
    }
 return true;   
}

//Concatenation
Mystring Mystring::operator+(const Mystring &rhs)
{
    char *buff= new char [strlen(this->str)+strlen(rhs.str)+1];
    strcpy(buff,this->str);
    strcat(buff,rhs.str);

    Mystring temp {buff};
    delete [] buff;
return temp;
}

//concatenation then assigning operator(+=)
Mystring &Mystring::operator+=(const Mystring &rhs)
{
    Mystring temp= operator+(rhs.str);
    strcpy(this->str,temp.str);
   
return *this;
}

//Multiplying x times
Mystring Mystring::operator*(int x)
{
    size_t len= strlen(this->str);
    char *buff=new char [len*x+1];
    strcpy(buff,this->str);
    x--;
    for(int i=0; i<x; i++)
        strcat(buff,this->str);
    
    Mystring temp {buff};
    delete [] buff;
return temp;
}

//*=
Mystring &Mystring::operator*=(int x)
{
    Mystring temp= operator*(x);
    strcpy(this->str,temp.str);
return *this;
}
//pre increment : I am converting all leters to uppercase
Mystring &Mystring::operator++()
{
    Mystring temp= operator+();
    strcpy(this->str,temp.str);
    
return *this;
}
//post increment
Mystring Mystring::operator++(int)
{
    Mystring temp {this->str};
    operator++();
return temp;
}
//getter and setters
void Mystring::display() const
{
    cout<< str <<": "<<strlen(str)<<endl; 
}

int Mystring::get_length() const
{
    return strlen(str);
}

const char *Mystring::get_str() const
{
    return str;
}