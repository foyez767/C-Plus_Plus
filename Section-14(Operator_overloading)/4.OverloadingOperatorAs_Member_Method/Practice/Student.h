#ifndef STUDENT_H
#define STUDENT_H
#include<string>

class Student{
    private:
        int a;
        int *b;  //pointer to an integar
    public:
        int get_a(){return a;}
        int get_b(){return *b;}
    //Constructor
    Student();  //No-args constructor
    Student(int a_val,int b_val); //Overloaded Constructor
    Student(const Student &source);     //Copy constructor
    Student(Student &&source);  //Move constructor
    //copy assignment
    Student &operator=(const Student &rhs);
    //Move assignment
    Student &operator=(Student &&rhs);
    //compare object
    bool operator==(const Student &rhs) const;
    //incrementing attribute
    Student &operator+();
    //decrementing attributes
    Student operator-();
    //sum of two object attributes
    Student operator+(const Student &rhs) const;

    //Methods
    void display();
    //Destructor
    ~Student();

};


#endif