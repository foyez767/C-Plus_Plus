//checking if a number is odd or even using if else statement and conditional operator
#include<iostream>
using namespace std;

int main(){
    // cout<<"Enter an integar: "<<endl;
    // int num {0};
    // cin>>num;
//Exercise-01*****************
    /************
     if(num %2 == 0)
        cout<<num<<" is even"<<endl;
    else
        cout<<num<<" is odd"<<endl;

    **********conditional operator**********
    cout<<num<<" is"<<((num %2 == 0) ? " even" : " odd")<<endl;
    ***********/

//Exercise -02***********:checking which one is bigger

    cout<<"Enter two integar separeted by space: "<<endl;
    int num1{0},num2{0};
    cin>>num1>>num2;
    //way-01
    // cout<<"largest number is : "<<((num1>num2)? num1:num2)<<endl; 
//*********what is problem with first way?actually if you entered two equal numbers ,it will not behave well enough.
    //way-02*********
    if(num1 != num2)
    {
    cout<<"largest number is : "<<((num1>num2)? num1:num2)<<endl;    
    cout<<"Smallest number is : "<<((num1<num2)? num1:num2)<<endl;    
    }
    else
    {
        cout<<"The number you entered are equal."<<endl;
    }

        
    return 0;
}