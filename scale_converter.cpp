#include<iostream>
using namespace std;

int main(){
    cout<<"Enter temperature in celcius scale : "<<endl;
    double celsius_temp {0};
    cin>>celsius_temp;

    double ferenheight_temp= 32+(celsius_temp*9)/5;
    cout<<celsius_temp<<" celsius scale temperature is "<<ferenheight_temp<<" in ferenheight scale."<<endl;
    return 0;
}