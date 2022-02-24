//pass by value
#include<iostream>

void pass_by_value(int actual ){     //formal is a copy of actual
    std::cout<<actual<<std::endl;   //50
    actual =100;                    //only changes to **local copy***
    std::cout<<actual<<std::endl;   //100

}
int main(){
    int actual {50};
    std::cout<<actual<<std::endl;   //50
    pass_by_value(actual);          //pass in 50 to pass_by_value
    std::cout<<actual<<std::endl;   //50--did not change
    return 0;
}
//conclusion:::we can not make a change of actual parameter ,we just create a copy version of actual parametter
//we've seen that when we pass a parameter into a function,the default is pass by value.that means a copy of the actual parameter is made.