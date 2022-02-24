//*********Exercise about operator*********
// 100 cents= 1 dollar
// 25 cents = 1 quarter
//10 cents  = 1 dime
//5 cents   = 1 nickle 
// 1 cent   =1 penny

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your money in cents : "<<endl;
    int cent {0};
    cin>>cent;

    cout<<"I can give you this change combination : "<<endl;

    int dollar {0};
    dollar = cent/100;
    cout<<"Dollar  : "<<dollar<<endl;
    int remainder {0};
    remainder = cent % 100;
    
    int quarter {0};
    quarter = remainder / 25;
    cout<<"Quarter : "<<quarter<<endl;
    remainder= remainder % 25;

    int dime {0};
    dime= remainder /10;
    cout<<"Dime    : "<<dime<<endl;
    remainder = remainder % 10;

    int nickle {0};
    nickle = remainder / 5 ;
    cout<<"Nickle  : "<<nickle <<endl;
    remainder = remainder % 5;

   int penny {0};
   cout<<"Penny   : "<<penny<<endl;
   
return 0;
}
