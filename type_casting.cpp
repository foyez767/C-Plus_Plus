#include<iostream>
using namespace std;

int main(){
    cout<<"Enter 3 integar numbers : "<<endl;
   double num1 {0},num2 {0}, num3 {0};
    cin>>num1>>num2>>num3;

    const int count {3};
    int total=num1+num2+num3;
    // double average=total/count;  //*********total,count both arre integar .So ultimately average will be integar also
    double average=static_cast<double>(total)/count;



    cout<<"numbers are : "<<num1<<","<<num2<<","<<num3<<endl;
    cout<<"The sum is : "<<total<<endl;
    cout<<"Average is : "<<average<<endl;
    return 0;
}