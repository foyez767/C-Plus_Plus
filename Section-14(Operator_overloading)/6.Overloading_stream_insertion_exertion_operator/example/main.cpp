#include<iostream>

int main(){
    unsigned long long x{0},digit_num{0},sum_digits {0};

    std::cin>>x;
    unsigned long long a{x}, b{0};
//     while(x>0){
//         x=x/10;
//         ++digit_num;
//     }
// for(unsigned long long i{0};i<digit_num;i++){
//     b=a%10;
//     sum_digits+=b;
//     a=a/10;

// }
while(x){
    sum_digits+=x%10;
    x=x/10;
}
std::cout<<sum_digits<<std::endl;

    return 0;
}