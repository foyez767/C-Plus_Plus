//***Finding Nth fibonacci numbers  with recursive function
#include<iostream>

unsigned long long fibonacci(unsigned long long n){
        if(n<=1)
            return n;   //base case
    
    return fibonacci(n-1)+fibonacci(n-2);

}

int main(){
    int num {0};
    std::cout<<"Enter fibonacci term : ";
    std::cin>>num;

    std::cout<<"In fibonacci sereies "<<num<<"th term is : "<<fibonacci(num)<<std::endl;
    return 0;
}