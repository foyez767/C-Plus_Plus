//***calculating the area of a circle from radius
#include<iostream>

const double pi {3.1416};

double calculate_area(double radius){

    double area=pi*radius*radius;

    return area;
}

int main(){
    double radius {};
    std::cout<<"Enter radius of circle: ";
    std::cin>>radius;
    std::cout<<"Area of circle is : "<<calculate_area(radius)<<std::endl;
    return 0;
}

