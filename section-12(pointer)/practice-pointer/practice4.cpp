/*Write a C++ program to find the max of an integral data set. 
The program will ask the user to input the number of data values in the set and each value. 
The program prints on screen a pointer that points to the max value.**/
#include<iostream>
#include<vector>

int main(){

int max_num {},size {},x{};

std::vector<int> data {};

std::cout<<"Enter size : ";
std::cin>>size;

int *pointer {&max_num};

for(size_t i {0};i<size;i++)
    {
        std::cout<<"Enter data : ";
        std::cin>>x;
        data.push_back(x);
    }
    max_num=data.at(0);
for(size_t i {0};i<data.size();i++)
    {
        if(max_num>data.at(i));
        else
            max_num=data.at(i);
    }
std::cout<<"Max number is : "<<*pointer<<std::endl;

    return 0;
}