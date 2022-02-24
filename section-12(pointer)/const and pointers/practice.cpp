#include<iostream>
int main(){

// /***[1]:pointers to constant:: the data pointers is pointing to is constant
// we can change the value of pointers but can not change the data it is pointing to*/

// int x {10};
// int y {20};
// const int *pointer1 {&x};//pointer pointing to an integar which is constant

// // *pointer1=100;  //ErroR because the data pointer is pointing to is constant so we can not change it

// pointer1=&y;    //its okay since pointer can be changed

/*************[2]:constant pointers::here pointers is constant so we can not changed it but 
the data it is pointing to can be changed*/

// int x{10};
// int y {20};
// int *const pointer {&x};    //pointer itself is a constant 

// *pointer=20;               //okay since data is not constant here
// pointer=&y;          //error since pointers is constant

/*********[3]:constant pointers to constants::BOTH pointers and the data it is pointing to is constant...
 No one can be changed**********/

// int x{10};
// int y {20};
// const int *const pointer {&x};    //both pointer and the data it is pointing to is a constant 

// *pointer=20;      //error since  the data pointer is pointing is also a constant
// pointer=&y; //error since pointers is constant 


    return 0;
}
