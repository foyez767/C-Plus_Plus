#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<char> vowels;  ********empty
    // vector<char> vowels (5);*********5 element initialized to zero

    //******************
    // vector<char> vowels {'a','e','i','o','u'};
    // cout<<vowels [2]<<endl;                     *********accesing vector element
    // cout<<vowels.at(2);

    //********************
    // vector<int>test_scores(5);********5 elements,all initialized at 0
    // vector<int>test_scores (5, 100);********5 elements,all initialized at 100

    vector<int>test_scores {100,90,86}; //3 elements ,all initialized at 100,90,86 respectively

    // cout<<"Test score using array syntax"<<endl;
    // cout<<test_scores [0] <<endl;
    // cout<<test_scores [1] <<endl;
    // cout<<test_scores [2] <<endl;

    // cout<<"Test score using vector syntax"<<endl;
    // cout<<test_scores.at(0) <<endl;
    // cout<<test_scores.at(1) <<endl;
    // cout<<test_scores.at(2) <<endl;

    // cout<<"There are "<<test_scores.size()<<" vector elements.";

    //*******************
    // cout<<"Enter test score:";
    // cin>>test_scores.at(0);
    // cin>>test_scores.at(1);
    // cin>>test_scores.at(2);

    // cout<<"UPDATED test scores are:"<<endl;
    // cout<<test_scores.at(0)<<endl;
    // cout<<test_scores.at(1)<<endl;
    // cout<<test_scores.at(2)<<endl;

//**********dYNAMIC vector**********

// cout<<"Enter a test score to add to the vector:";
// int num1 {0};
// cin>>num1;
// test_scores.push_back(num1);

// cout<<"Enter one more test score to add to the vector:";
// cin>>num1;
// test_scores.push_back(num1);

// cout<<"NOW UPDATED test scores are:"<<endl;
//     cout<<test_scores.at(0)<<endl;
//     cout<<test_scores.at(1)<<endl;
//     cout<<test_scores.at(2)<<endl;
//     cout<<test_scores.at(3)<<endl;
//     cout<<test_scores.at(4)<<endl;

// cout<<"There are "<<test_scores.size()<<" element right now.";

//***************************this should cause an exception************

//cout<<test_scores.at(4)<<endl; **********bound checking
    
    return 0;
}