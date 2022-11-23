#include<iostream>
#include<vector>
using namespace std;

class Shape 
{
    public:
        virtual void draw()=0;      //pure virtual function
        virtual void rotate()=0;    //Pure virtual function

        virtual~Shape(){}
};

class Open_shape: public Shape
{
    public:
    virtual ~ Open_shape(){}

};

class Closed_shape: public Shape
{
    public:
        virtual ~ Closed_shape(){}
};
/*Shape class is abstract since it contain pure virtual function
Open shape,Closed shape class is also abstract since it is derived from Shape class so pure virtual function need
to be override,but we did not override those pure virtual function in this two class,so they are abstract
*/

//***Here Shape class has two virtual function but I override one,hence it is also abstract
class emni: public Shape
{
    public:
        void draw() override{
            cout<<"Nothing"<<endl;
        }
};
//below functions are concreate class
class Line: public Open_shape
{
    public:
        void draw() override{
            cout<<"Drawing-Line"<<endl;
        }
        void rotate() override{
            cout<<"Rotating-Line"<<endl;
        }
};
class Circle: public Closed_shape
{
    public:
        void draw() override{
            cout<<"Drawing-Circle"<<endl;
        }
        void rotate() override{
            cout<<"Rotating-Circle"<<endl;
        }
};
class Square: public Closed_shape
{
    public:
        void draw() override{
            cout<<"Drawing-Square"<<endl;
        }
        void rotate() override{
            cout<<"Rotating-Square"<<endl;
        }
};

int main()
{
    //We can not make abstract class object
    // Shape a;
    // Open_shape a;
    // Closed_shape a;
    // Shape *ptr= new Shape();
    // Open_shape *ptr= new Open_shape();
    // Closed_shape *ptr= new Closed_shape();
    // emni a; 

    /*****/
    Shape *p1= new Line();
    Shape *p2= new Circle();
    Shape *p3= new Square();

    vector<Shape *> shapes {p1,p2,p3};

    for(auto v: shapes){
        v->draw();
        v->rotate();
    }


    return 0;
}