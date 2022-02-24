#include<iostream>
#include<vector>

int main(){
    // int num {10};           //simple variable
    // double num1 {10};
    // std::cout<<"Value of num : "<<num<<std::endl;
    // std::cout<<"Size of num : "<<sizeof(num)<<std::endl;
    // std::cout<<"Size of num1 : "<<sizeof(num1)<<std::endl;
    // std::cout<<"Address of num : "<<&num<<std::endl;
//**************************
    // int *pointer;  
    // std::cout<<"\nValue of pointer : "<<pointer<<std::endl;       //we didn't initialize pointer so here we get a garbage data
    // std::cout<<"Size of pointer : "<<sizeof(pointer)<<std::endl;
    // std::cout<<"Address of pointer : "<<&pointer<<std::endl;

    // pointer=nullptr;        //nullptr equivalent to zero ...here i assign value of pointer to 0
    // std::cout<<"Value of pointer now : "<<pointer<<std::endl;
//**********************
    // //***all pointers in a program have same size ***
    // //but what type of data they point to can be different in size

    // int *p1 ;
    // double *p2;
    // unsigned long long *p3;
    // std::string *p4;
    // std::vector<int> *p5;

    // std::cout<<"\nSize of p1 is : "<<sizeof(p1)<<std::endl; //In this case, what is the size of p1?
    //                                                         //How much storage do I need to represent the address of an integer?
    // std::cout<<"Size of p2 is : "<<sizeof(p2)<<std::endl;   //what's the size of p2?
    //                                                         //how much storage do I need to represent the address of a double?
    // std::cout<<"Size of p3 is : "<<sizeof(p3)<<std::endl;
    // std::cout<<"Size of p4 is : "<<sizeof(p4)<<std::endl;
    // std::cout<<"Size of p5 is : "<<sizeof(p5)<<std::endl;

   
// *********************
    // int score {10};
    // double temp {100.8};

    // int *pointer {nullptr};

    // pointer= &score;
    // std::cout<<"\nSize of score : "<<sizeof(score)<<std::endl;
    // std::cout<<"Value of score : "<<score<<std::endl;
    // std::cout<<"Address of score : "<<&score<<std::endl;
    // std::cout<<"Value of pointer : "<<pointer<<std::endl;

    // pointer= &temp; //compiler error because pointer points to an integar but temp is a double

    return 0;
}