#include<iostream>
using namespace std;

class A{
    private:
        int x;
    public:
    A(){x=0;}
    int getx(){return x;}
    //prototype of friend function
        friend void Add(A &obj,int a);
        friend void Decx(A &obj);
        friend void Incx(A &obj);
};

void Add(A &obj,int a){
    obj.x = obj.x + a;
}
void Decx(A &obj){
    obj.x = obj.x - 1;
}
void Incx(A &obj){
    obj.x = obj.x + 1;
}

int main(){
    A a;
    cout<< a.getx() <<endl;
    Add (a, 10);
    cout<< a.getx() <<endl;
    Decx(a);
    cout<< a.getx() <<endl;
    Incx(a);
    cout<< a.getx() <<endl;


    return 0;
}