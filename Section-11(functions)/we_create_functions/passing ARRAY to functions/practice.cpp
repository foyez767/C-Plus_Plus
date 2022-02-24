#include<iostream>

//function defination
//this function will display array element
void print_array_element(const int test_scores [],int array_length){
    for(size_t i {0}; i<array_length ;  i++)
        std::cout<<test_scores [i]<<" ";
    
    std::cout<<std::endl;
    
}
//this function will change all array element to 100
void change_array_element( int test_scores[],int array_length,int value){
    for(size_t i {0};i<array_length;i++)
        test_scores [i]= value;
}


int main(){
    int test_scores [] {1,2,3,4,5,6,7};
    int array_length =sizeof(test_scores)/sizeof(test_scores [0]);
    print_array_element(test_scores,array_length);    //this function will display array element
    int value =100;
    change_array_element(test_scores,array_length,value);
    print_array_element(test_scores,array_length);
    return 0;
}

//when we pass an array into a function, we don't make a copy,
// instead we use the location of the array, which means ***we can change it*** from within the function