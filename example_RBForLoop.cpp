//determine how many elements in the vector are evenly divisible by either 3 or 5
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count {0};
    vector<int>vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};

    for(int x:vec)
    {
        if(x %3 ==0 || x%5==0)
        {
              count++;
        }
          
    }
    cout<<"total divisable number are : "<<count;
    
    return 0;
}