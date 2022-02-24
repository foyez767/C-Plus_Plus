//returning an address/pointer from function

#include<iostream>
//function prototype
int  *create_array(size_t size,int init_value);
void display_array_element(const int *const array,int size);

//function definition
int  *create_array(size_t size,int init_value){
    int *new_storage {nullptr};
    new_storage=new int [size]; //we allocated space dynamically for array by new keyword✌👩‍💻🛴💫😎

    for(size_t i {0}; i<size;i++)
       {
       *(new_storage+i)=init_value;    //using offset notation for initializztion
        // (new_storage[i])=init_value;    //using subscript notation for initializztion

       }

return new_storage; //new_storage hold the address of the first element of the array,and we return it to function
}

void display_array_element(const int *const array,int size){
    for(size_t i {0};i<size;i++)
        std::cout<<*(array+i)<<" ";

}

int main(){
    size_t size;
    int init_value {};
    int *my_array {nullptr};

    std::cout<<"Array size : ";
    std::cin>>size;
    std::cout<<"Initial value : ";
    std::cin>>init_value;

    my_array=create_array(size,init_value); //the return value from the function is an address,so i assign this addres to my_array pointer

    std::cout<<"*******************"<<std::endl;

    display_array_element(my_array,size);//this function is for display all array element

    delete [] my_array; //***remember it ,you should free the heap by delete keyword

    return 0;
}