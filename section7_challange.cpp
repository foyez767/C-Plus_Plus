#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>vector1;
vector<int>vector2;

vector1.push_back(10);
vector1.push_back(20);
cout<<"Element of vector 1: "<<endl;
cout<<vector1.at(0)<<endl;
cout<<vector1.at(1)<<endl;
cout<<"Vector 1 have "<<vector1.size()<<" element."<<endl<<endl;

vector2.push_back(100);
vector2.push_back(200);
cout<<"Element of vector 2:"<<endl;
cout<<vector2.at(0)<<endl;
cout<<vector2.at(1)<<endl;
cout<<"Vector 2 have "<<vector2.size()<<" element."<<endl<<endl;


vector<vector<int>>vector_2d;
vector_2d.push_back(vector1);
vector_2d.push_back(vector2);
cout<<"Element of vector 2d are: "<<endl;
cout<<vector_2d.at(0).at(0)<<endl;
cout<<vector_2d.at(0).at(1)<<endl;
cout<<vector_2d.at(1).at(0)<<endl;
cout<<vector_2d.at(1).at(1)<<endl; 
cout<<"vector 2d have  "<<vector_2d.size()<<" element."<<endl;

vector1.at(0) =1000;
cout<<"UPDATED Element of vector 2d are: "<<endl;
cout<<vector_2d.at(0).at(0)<<endl;
cout<<vector_2d.at(0).at(1)<<endl;
cout<<vector_2d.at(1).at(0)<<endl;
cout<<vector_2d.at(1).at(1)<<endl;  

cout<<"UPDATED vector 1 : "<<endl;
cout<<vector1.at(0)<<endl;
cout<<vector1.at(1)<<endl;


    return 0;
}