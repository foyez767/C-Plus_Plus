#include<iostream>
using namespace std;

int main(){
    int num {0};
    const int lower {10};
    const int upper {30};
//***********determine if an entered integar is between two number
    // cout<<"Enter an integar between "<<lower<<" and "<<upper<<" : "<<endl;
    // cin>>num;

    // bool within_bounds {false};
    // cout<<boolalpha;
    // within_bounds = (num>lower) && (num<upper);
    // cout<<num<<" is between "<<lower<<" and "<<upper<<" ? "<<within_bounds<<endl;

//*******determine if an entered integar is outside two numbers*********
    // cout<<"Enter an integar outside "<<lower<<" and "<<upper<<" : "<<endl;
    // cin>>num;

    // bool within_bounds {false};
    // cout<<boolalpha;
    // within_bounds = (num<lower) || (num>upper);
    // cout<<num<<" is outside "<<lower<<" and "<<upper<<" ? "<<within_bounds<<endl;

//*******determine if an entered integar is exactly on boundary*********
    cout<<"Enter an integar  , boundary line: "<<lower<<" and " <<upper<<" : " <<endl;
    cin>>num;

    bool on_bounds {false};
    cout<<boolalpha;
    on_bounds = (num==lower) || (num==upper);
    cout<<"Is "<<num<<" on boundary line? "<<on_bounds<<endl;


    return 0;
}