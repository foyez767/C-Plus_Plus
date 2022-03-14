#ifndef MYSTRING_H
#define MYSTRING_H
#include<string>

class Mystring{
    //Insertion operator
    friend std::ostream &operator<<(std::ostream &output,const Mystring &rhs);
    //Exertion operator
    friend std::istream &operator>>(std::istream &input,Mystring &rhs);
private:
    char *str;
public:
    Mystring();                 //No arg constructor
    Mystring(const char *s);    //Overloaded constructor
    Mystring(const Mystring &source);   //deep Copy constructor
    Mystring(Mystring &&source);        //Move constructor
    ~Mystring();                        //Destructor
    //copy assignment
    Mystring &operator=(const Mystring &source);   
    //move assignment
    Mystring &operator=(Mystring &&source);
    void display();
    int get_length();


};

#endif