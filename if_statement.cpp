//********if statement**********
#include<iostream>
using namespace std;

int main(){
    const int min {10};
    const int max {100};
    cout<<"Enter an integar between "<<min<<" and "<<max<<": ";
    int num {0};
    cin>>num;

    if (num>=min)
    {
        cout<<"***************if statement 1 ******************"<<endl;
        cout<<num<<" is greater than or equal to "<<min<<endl;
        int diff {num-min};
        cout<<num<<" is "<<diff<<" greater than "<<min<<endl;

    }
    if(num<=max)
    {
        cout<<"***************if statement 2 ******************"<<endl;
        cout<<num<<" is less than or equal to "<<max<<endl;
        int diff {max-num};
        cout<<num<<" is "<<diff<<" less than "<<max<<endl;

    }
    if (num>=min && num<=max)
    {
        cout<<"***************if statement 3 ******************"<<endl;
        cout<<num<<" is between "<<min<<" and "<<max<<endl;
        int diff1 {num-min};
        int diff2 {max-num};
        cout<<num<<" is "<<diff1<<" greater than "<<min<<" and "<<diff2<<" less than from "<<max<<endl;
    }
    if(num==min || num==max)
    {
        cout<<"***************if statement 4 ******************"<<endl;
        cout<<num<<" is right on the boundary."<<endl;
    }
    return 0;
}