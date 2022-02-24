//***calculating cylinder volume

#include<iostream>

double const pi {3.1416};

double calc_volume(double radius,double height)
{
   return pi*radius*radius*height;
}
void cylinder_volume()
{
    double radius {};
    double height {};
    std::cout<<"Enter radius and height respectively: ";
    std::cin>>radius>>height;
    std::cout<<"\nThe volume of cylinder is : "<<calc_volume(radius,height)<<std::endl;

}


int main(){
    cylinder_volume();
    return 0;
}