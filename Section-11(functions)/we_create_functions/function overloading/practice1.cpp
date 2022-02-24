//function overloading

#include<iostream>
//function prototype
int sum(int a,int b);
double sum(double a,double b);

int main()
{
    sum(23,35);
    sum(23.30,36.890);
    return 0;
}
//function definitations
int sum(int a,int b){
    int total=a+b;
    std::cout<<total<<std::endl;
    return total;
}
double sum(double a,double b){
    double total=a+b;
    std::cout<<total<<std::endl;
    return total;
}

