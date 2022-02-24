//****example-01
// #include<iostream>

// int func(int &x){ 

//     return x;
// }

// int main(){
//     int x {100};
//     std::cout<<func(x)<<std::endl;
//     // std::cout<<func(100)<<std::endl; //Error because my func expect a l-value references but 100 is a r_value

//     return 0;
// }

//***Example-02
// #include<iostream>

// int func(int &&x){ 

//     return x;
// }

// int main(){
//     int x {100};
//     // std::cout<<func(x)<<std::endl;  //Error because my func expect a r-value references but x is a l_value
//     std::cout<<func(100)<<std::endl; 

//     return 0;
// }

//***Example-03:overloaded
 #include<iostream>

 int func(int &x){ 
     std::cout<<"L-value reference called"<<std::endl;
    return x;
}

int func(int &&x){ 
    std::cout<<"R-value reference called"<<std::endl;
    return x;
}

int main(){
    int x {100};
    std::cout<<func(x)<<std::endl;  
    std::cout<<func(100)<<std::endl; 

    return 0;
}