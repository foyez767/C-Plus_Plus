//**********difficult exercise ,try it again.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec {1,2,3,4,40,90,100,-99,70,67,50};
    int i {0};
    int count {0};

    while(i<vec.size() && vec.at(i) != -99)
    {
      count++;
      i++;
      
    }
    cout<<count;

    
    return 0;
}