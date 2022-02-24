//increment and decrement operator can be used for integar and float numbers and pointers
//NEVER use it twice for same variable in same statement

#include<iostream>
using namespace std;

int main(){
    // int counter {10};
    // int result {0};
    //example-1: simple increment*********
    // cout<<"counter : "<<counter<<endl;

    // counter=counter+1;
    // cout<<"counter : "<<counter<<endl;

    // counter++;
    // cout<<"counter : "<<counter<<endl;

    // ++counter;
    // cout<<"counter : "<<counter<<endl;

    //example-2: PRE increment***********
    // counter =10;
    // result  = 0;

    // cout<<"counter : "<<counter<<endl;

    // result= ++counter; //*********counter=counter+1********result=counter
    // cout<<"counter : "<<counter<<endl;
    // cout<<"result  : "<<result<<endl;

    //example-3:POST increment*********

    // counter= 10;
    // result = 0;
    
    // cout<<"counter : "<<counter<<endl;
    // result=counter++; //result=counter;*********counter = counter+1********
    // cout<<"counter : "<<counter<<endl;
    // cout<<"result  : "<<result<<endl;

    //eample-04
    // counter= 10;
    // result = 0;
    
    //  cout<<"counter : "<<counter<<endl;
    //  result=++counter+10;//********counter=counter+1..........result=counter+10
    //  cout<<"counter : "<<counter<<endl;
    //  cout<<"result  : "<<result<<endl;

    //EXAMPLE -05
    // counter= 10;
    // result  =0;
    // cout<<"counter : "<<counter<<endl;
    //  result= counter++ +10;//*******result=counter+10;.......counter=counter+1;
    //  cout<<"counter : "<<counter<<endl;
    //  cout<<"result  : "<<result<<endl;


    return 0;
}