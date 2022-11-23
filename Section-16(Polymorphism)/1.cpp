#include<iostream>
#include<math.h>
using namespace std;

class Circuit{
    private:
        int real;
        int img;
    public:
    Circuit(){
        real = 0;
        img = 0;
    }
    Circuit(int a,int b){
        real = a;
        img = b;
    }
    //
    int getreal(){return real;}
    int getimg(){return img;}
    //overloading operator
    Circuit operator+(const Circuit &rhs){
        Circuit temp;
        temp.real = real+rhs.real;
        temp.img = img +rhs.img;
    return temp;
    }
    Circuit &operator+=(const Circuit &rhs){
        this->real = (this->real)+(rhs.real);
        this->img = (this->img)+(rhs.img);
    return *this;
    }

    Circuit operator/(const Circuit &rhs){
        // Circuit temp;
        double reall = (real*(rhs.real) + img*(rhs.img)) * pow((pow(rhs.real,2)+pow(rhs.img,2)),-1);
        double imgg = (img * rhs.real - real * rhs.img) * pow((pow(rhs.real,2)+ pow(rhs.img,2)),-1);
        Circuit temp (reall,imgg);
    return temp;
    }
};

int main(){
    Circuit z1 (3,4);
    Circuit z2 (4,-3);
    Circuit z3 (0,6);

    Circuit V (100,50);
    Circuit Z;
    // cout<< Z.getreal() <<endl;
    // cout<< Z.getimg() <<endl;
    // Z+=z1;
    // // cout<< Z.getreal() <<endl;
    // // cout<< Z.getimg() <<endl;
    // Z+=z2;
    // // cout<< Z.getreal() <<endl;
    // // cout<< Z.getimg() <<endl;
    // Z+=z3;
    Z = z1 + z2 + z3;
    cout<< Z.getreal() <<endl;
    cout<< Z.getimg() <<endl;
    Circuit I;
    I = V / Z;
    cout<< I.getreal() <<endl;
    cout<< I.getimg() <<endl;

    return 0;
}