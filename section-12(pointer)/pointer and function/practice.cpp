//practice:1-4....passing pointer to functions

#include<iostream>

void double_data(int *pointer){
    *pointer*=2;    //*pointer=(*pointer)*2;
}

int main(){
    int num {10};
    int *pointer {nullptr};
    std::cout<<"Num is : "<<num<<std::endl;
    
    double_data(&num);
    std::cout<<"Num is : "<<num<<std::endl;

    std::cout<<"\n______________________"<<std::endl;

    pointer=&num;
    double_data(pointer);
    std::cout<<"Num is : "<<num<<std::endl;

    return 0;
}