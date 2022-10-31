#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
    friend std::ostream &operator<<(std::ostream &output, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &input, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment

    Mystring operator-();          //convert str lowercase
    Mystring operator+();          //convert str uppercase
    //Compare two string
    bool operator==(const Mystring &rhs);   
    bool operator!=(const Mystring &rhs);   
    bool operator<(const Mystring &rhs);
    bool operator>(const Mystring &rhs);

    Mystring operator+(const Mystring &rhs);    //Concatenate two string 
    Mystring &operator+=(const Mystring &rhs);

    Mystring operator*(int x);  //Multiplying lhs for x times
    Mystring &operator*=(int x);
    //pre and post increment
    Mystring &operator++();
    Mystring operator++(int);
    
    void display() const;
    int get_length() const;                                      // getters
    const char *get_str() const;
};

#endif