//***Finding factorial with recursive function

#include<iostream>

unsigned long long factorial (unsigned long long n){
    if(n==0)
        return 1;     //base case
    
    return n*factorial(n-1);  //i call factorial function inside of factorial that means it is a recursive function 
                                //and recursion is hapening

}

int main(){
    int num {0};
    std::cout<<"Enter a positive number to find factorial: ";
    std::cin>>num;

    if(num<0)
        std::cout<<"\nFactorial of negative number does not exist."<<std::endl;
    else
        std::cout<<"\nFactorial of "<<num<<" is : "<<factorial(num)<<std::endl;   //i call the function factorial here
    return 0;
}
