#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<vector<int>>marks {
                                {2,3,4},
                                {5,6,7},
                                {8,9,1}
                             };

    cout<<"Marks in array syntax:"<<endl;
    cout<<marks [0][0]<<endl;
    cout<<marks [0][1]<<endl;
    cout<<marks [0][2]<<endl;
    
    cout<<"Marks in vector syntax:"<<endl;
    cout<<marks.at(0).at(0)<<endl;
    cout<<marks.at(0).at(1)<<endl;
    cout<<marks.at(0).at(1)<<endl;
    return 0;
}