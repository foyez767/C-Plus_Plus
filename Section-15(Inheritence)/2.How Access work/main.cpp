//public is accessible from class and objects both
//private member is not accessible from class or objects
//protected is accessible from class but can not accessible from objects
#include<iostream>
using namespace std;

class Base{
    //note: friends of base class has access to all
    public:
        int a=0;
    protected:
        int b=0;
    private:
        int c=0;
};
//Note: friends of derived class has access to only what derived class has access to 
class Derived1: public Base{
    //Here:
    //a is public in base becomes public in child,hence from object it is accessible
    //b is protected in base beomes protected in child
    //c is private in base class so can not accessible
    public:
    void member_access_modifiers(){
        a=100;  //ok
        b=200;  //ok
        // c=300;  //ERROR
    }
};
class Derived2: private Base{
    //Here:all of 3 is not accessible vie object for below characteristics:
    //a is public in base but becomes private in child
    // b is protected in base but becomes private in child
    //c is private in base so it is not accessible
    public:
    void member_access_modifiers(){
        a=100;
        b=100;
        // c=100;   //ERROR
    }
};
class Derived3: protected Base{
    //Here:all of 3 is not accessible vie object for below characteristics:
    //a is public in base but becomes protected in child
    // b is protected in base but becomes protected in child
    //c is private in base so it is not accessible
    public:
    void member_access_modifiers(){
        a=100;
        b=200;
        // c=300;  //ERROR
    }

};

int main(){
    cout<<" Base member access from base class"<<endl;
    Base b1;
    b1.a=100;        //OK
    // b1.b=200;     //Error
    // b1.c=300;     //Error
    cout<<" Base member access form derived public class"<<endl;
    Derived1 d1;
    d1.a=100;
    // d1.b=200;   //Error
    // d1.c=300;  //error
    cout<<" Base member access form derived private class"<<endl;
    Derived2 d2;
    // d2.a=100;   //ERROR
    // d1.b=200;   //Error
    // d1.c=300;  //error

     cout<<" Base member access form derived protected class"<<endl;
    Derived2 d3;
    // d3.a=100;   //ERROR
    // d3.b=200;   //Error
    // d3.c=300;  //error

    return 0;
}