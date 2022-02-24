//returning an address/pointer from function
#include<iostream>

int *largest_int_location(int *pointer1,int *pointer2){
    if(*pointer1>*pointer2)
        return pointer1;
    else
        return pointer2;
}

int main(){
    int a {100};
    int b {200};
    int *pointer {nullptr};

    pointer=largest_int_location(&a,&b);
    std::cout<<*pointer<<std::endl;
    return 0;
}
