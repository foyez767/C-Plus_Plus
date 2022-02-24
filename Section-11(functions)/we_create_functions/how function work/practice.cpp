//***how function call work
#include<iostream>

// void func2(int x,int y,int z){  //***check with this line
    int func2(int &x,int y,int z){
        x+=(y+z);
        
        return x;
    }

int func1 (int a,int b){
    int result=a+b;

    func2(result,a,b);
    
    return result;
}

int main(){
    int x {10};
    int y {20};
    int z {0};

    z=func1(x,y);
    std::cout<<z<<std::endl;

    return 0;
}