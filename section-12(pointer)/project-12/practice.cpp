#include<iostream>

/*******************************************************************
This function expects:
    array_name_1 - a pointer to an array of integers
    size1 - the number of integers in arr1
    array_name_2 - a pointer to another array of integers
    size2 - the number of integers in arr2
    
    The function dynamically allocates a new array that is of size = size1 * size2
    Then it loops through each element of array_name_2 and multiples it across all the
    elements of array_name_1 and each product is stored in the newly created array
********************************************************************/
int *apply_all(int array_name_1[],int size1,int array_name_2[],int size2){

    int size=size1*size2;
    int *new_array {nullptr};
    new_array=new int [size];   //allocate memory for array
    int position {};

    for(size_t i {0};i<size2;i++)
        {
            for(size_t j {0}; j<size1;j++)
                {
                    *(new_array+position)=array_name_2[i]*array_name_1[j];
                    
                    if(position<size)
                        position++;
                }           
        }              
    return new_array;    
}
/*******************************************************************
This function expects:
    array - a pointer to an array of integers
    size - the number of integers in arr
    
    The function loops through arr and displays all the integers
    in the array
********************************************************************/
void print_element (int array [],int size){
    for(size_t i {0}; i<size;i++)
        std::cout<<array[i]<<" ";

    std::cout<<"]"<<std::endl;

}

int main(){

    int array_name_1 [] {1,2,3,4,5,6};
    int array_name_2 [] {10,20,30};
    int size1 {sizeof(array_name_1)/sizeof(array_name_1[0])};
    int size2 {sizeof(array_name_2)/sizeof(array_name_2[0])};

    std::cout<<"Array name 1 : [ ";
    print_element(array_name_1,size1);

    std::cout<<"Array name 2 : [ ";
    print_element(array_name_2,size2);

    int *result=apply_all(array_name_1,size1,array_name_2,size2);
    std::cout<<"Result : [ ";
    print_element(result,(size1*size2));

    delete [] result;

    return 0;
}
