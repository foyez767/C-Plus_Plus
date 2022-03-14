#include "Student.h"
#include<iostream>
#include<string>
//No args Constructor
Student::Student()
    :a{0},b {nullptr}{
}
//Overloaded Constructor
Student::Student(int a_val,int b_val)
    :a{a_val},b {nullptr}{
    b=new int ;
    *b=b_val;
}
//Deep Copy constructor
Student::Student(const Student &source)
    :a {source.a},b {nullptr}{
        b =new int;
        *b=*(source.b);
    }
//Move construtor
Student::Student(Student &&source)
    :a {source.a},b {nullptr}{
        this->b=source.b;
        source.b=nullptr;
    }
//Copy assignment
Student &Student::operator=(const Student &rhs){
if(this==&rhs)
    return *this;

delete this->b;

a=rhs.a;
b=new int;
*b=*rhs.b;

return *this;
}
//Move assignment
Student &Student::operator=(Student &&rhs){
if(this==&rhs)
    return *this;
delete this->b;

a=rhs.a;
b=rhs.b;
rhs.b=nullptr;

return *this;
}
//Compare two object
bool Student::operator==(const Student rhs) const{
    if(this->a==rhs.a){
        if(*b==*(rhs.b))
            return true;
    }
return false;
}

//incrementing class attributes
Student &Student::operator+() {
a=a+1;
*b=*(b)+1;

return *this;
}
//Decrementing class attributes
Student Student::operator-(){
    a=a-1;
    *b=(*b)-1;

    return *this;
}
//sum of two object attributes***[suppose in our class '*' this sign represent sum(+)]
Student Student::operator+(const Student rhs) const {
int sum_a=(this->a)+(rhs.a);
int *sum_b=new int; //allocating space for sum_b
*sum_b=(*b)+(*rhs.b);

Student temp(sum_a,*sum_b);

return temp;
}
//Destructor
Student::~Student(){
    delete b;
}
void Student::display(){
    std::cout<<"A :"<<get_a()<<std::endl;
    std::cout<<"b : "<<get_b()<<std::endl;
}