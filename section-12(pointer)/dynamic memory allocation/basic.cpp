//dynamic memory allocation basic(new,delete)

#include<iostream>

int main(){
 // //****allocate storage for an integar on heap/free space
    // int *pointer_variable {nullptr};
    // std::cout<<pointer_variable<<std::endl;

    // pointer_variable= new int;  //allocate storage on heap for an integar

    // *pointer_variable=100;  //the space i allocated for an integar,i assign there 100

    // std::cout<<pointer_variable<<std::endl; //memory address
    // std::cout<<*pointer_variable<<std::endl;    //dereferencing to see what have on this location

    // delete pointer_variable;    //deallocate storage 
    // //you MUST release the storage you use

//**********allocate storage for an array which store double data
    // double *pointer_variable {nullptr};
    // size_t size {0};

    // std::cout<<"Enter array size you need : ";
    // std::cin>>size;

    // pointer_variable= new double [size];    //allocate space for array

    // std::cout<<pointer_variable<<std::endl;     //address of first element of that array

    // delete [] pointer_variable;     //nothing inside ssquare breckets

    return 0;
}