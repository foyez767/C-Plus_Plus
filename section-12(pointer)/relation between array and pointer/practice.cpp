//***equivalance between array and pointers
#include<iostream>

int main(){
    int test_scores [] {100,90,87};

    std::cout<<"Value of test_scores : "<<test_scores<<std::endl;  //the value of array is the address of first element of that array

    /***we know that we need to use address operator to find any variable address on memory .
     since array variable hold  the address of the first element on memory 
     so we don't need to use address operator for array...because it's already an address***/

    // int *pointer {&test_scores}; //array name is an address,so we don't need to use address operator because 
                                    // a pointer also hold the address of the first element like an array//     

    int *pointer {test_scores};     
    std::cout<<"Value of pointer : "<<pointer<<std::endl; ////pointer value also address of the first element of the array test_scores

    std::cout<<"\n*****Array subscripting notation****"<<std::endl;
    std::cout<<test_scores [0]<<std::endl;
    std::cout<<test_scores [1]<<std::endl;
    std::cout<<test_scores [2]<<std::endl;

    std::cout<<"\n*********Pointer subscripting****"<<std::endl;
    std::cout<<pointer[0]<<std::endl;
    std::cout<<pointer[1]<<std::endl;
    std::cout<<pointer[2]<<std::endl;

    std::cout<<"********Pointer offset notation**********"<<std::endl;
    std::cout<<*(pointer+0)<<std::endl;
    std::cout<<*(pointer+1)<<std::endl;
    std::cout<<*(pointer+2)<<std::endl;

    std::cout<<"********Array offset notation**********"<<std::endl;
    std::cout<<*test_scores<<std::endl;
    std::cout<<*(test_scores+1)<<std::endl;
    std::cout<<*(test_scores+2)<<std::endl;
    return 0;
}