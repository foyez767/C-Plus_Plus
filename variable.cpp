#include<iostream>

int main()
{
    std::cout<<"Enter your room length : ";
    int room_length {0};
    std::cin>>room_length;
    std::cout<<"Enter your room width : ";
    int room_width {0};
    std::cin>>room_width;
    int area={room_length*room_width};
    std::cout<<"The area of your room is "<<area<<" square feet.";

    return 0;
}