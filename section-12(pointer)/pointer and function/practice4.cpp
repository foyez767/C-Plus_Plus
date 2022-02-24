//Array
#include<iostream>
//i can not declare array pointer is a constant because everytime increment happening,it's incremented array addres not value so pointer should not be remain samr
// void print_array (int *const array,int stopper){

void print_array (int * array,int stopper){
    while(*array != stopper){
    std::cout<<*array++<<std::endl;

    }
}

int main(){
    int test_scores [] {100,80,89,76,45};

    print_array(test_scores,45);
return 0;
}