#include<iostream>
using namespace std;

int main(){
    cout<<"Enter two integar: "<<endl;
    int num1{0},num2{0};
    cin>>num1>>num2;

    cout<<boolalpha;

    cout<<num1<<" > "<<num2<<" : "<<(num1 > num2)<<endl;
    cout<<num1<<" >= "<<num2<<" : "<<(num1 >= num2)<<endl;
    cout<<num1<<" < "<<num2<<" : "<<(num1 < num2)<<endl;
    cout<<num1<<" <= "<<num2<<" : "<<(num1 <=num2)<<endl;
    return 0;
}