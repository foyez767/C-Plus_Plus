#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
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
    //Overloading Operator
    Mystring operator+() const;
    Mystring operator-() const;                     //lowercase
    bool operator==(const Mystring rhs) const;      //compare two object
    Mystring operator+(const Mystring rhs) const;   //concate two object
    //Methods
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif