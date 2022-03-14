#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring
{
    friend Mystring operator+(const Mystring &obj); //uppercase
    friend Mystring operator-(const Mystring &obj); //lowercase
    friend bool operator==(const Mystring &lhs,const Mystring &rhs);    //compare two object
    friend Mystring operator+(const Mystring &lhs,const Mystring &rhs); //concatenate two object
private:
    char *str;  //pointer to a char[] that holds C style string
public:
    Mystring();     //No-arg constructor
    Mystring(const char *s);    //overloaded constructor
    Mystring(const Mystring &source);   //copy constructor
    Mystring(Mystring &&source);    //Move constructor
    ~Mystring();    //destructor
    //Copy assignment 
    Mystring &operator=(const Mystring &rhs);
    //Move assignment
    Mystring &operator=(Mystring &&rhs);
    //Methods
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif