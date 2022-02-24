//pass by reference
#include<iostream>

void pass_by_ref(int &num);  //function prototype
// void pass_by_ref(int &);  //function prototype

int main(){
    int number {100};
    std::cout<<"Number before calling pass by reference: "<<number<<std::endl;
    pass_by_ref(number);  //function call
    std::cout<<"Number after calling pass by reference: "<<number<<std::endl;
    return 0;
}

//function definations
void pass_by_ref(int &num){
    num= 1000;   //assignment
}