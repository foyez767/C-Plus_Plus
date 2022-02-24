#include<iostream>
using namespace std;

int main(){
    cout<<"********welcome to package cost calculator******"<<endl<<endl;
    cout<<"Enter your package length,width and height respectively in inch: "<<endl;
    int length{0},width{0},height{0};
    cin>>length>>width>>height;

    int package_volume =length*width*height;

    const double base_cost {2.50};
    const double surcharge1 {0.10};
    const double surcharge2 {0.25};
    double total_cost {};

    if(length<=10 && width<=10 && height<=10)
    {
        
        if(package_volume<100)
        {
            cout<<"Your total cost is : $ "<<base_cost<<endl;
        }
        else if(package_volume>=100 && package_volume<=500)
        {
            cout<<"10 % charge will apply in your package"<<endl;
            total_cost=base_cost+(surcharge1*base_cost);
            cout<<"Your total cost is : $ "<<total_cost<<endl;
        }
        else                //pacakage_volumee>500;
        {
            cout<<"25% charge will apply in your package"<<endl;
            total_cost=base_cost+(surcharge2*base_cost);
            cout<<"Your total cost is : $ "<<total_cost<<endl;
        }        
    }
    else
    {
        cout<<"Sorry!The size of your package exceed.";
    }

    return 0;
}