#include<iostream>
#include<vector>
using namespace std;

int main(){

    //*********example-01*********using range based for loop in an array
    // int test_scores [] {10,20,30,40};
    // // for(int score:test_scores)
    // for(auto score:test_scores)
    // {
    //     cout<<score<<endl;
    // }


    //example-02****************:::finding the average of temperature /using range based for loop in vectors

    // vector<double>temperature {90.8,78.9,99.4,81.56};
    // double total {0};
    // double average ;

    // for(auto temp:temperature)
    // {
    //     // total=total+temp;
    //     total += temp;
    // }
    //     if(temperature.size() != 0)
    //         {
    //             cout<<"Average of temperature is : "<<total/temperature.size()<<endl;
    //         }
    //     else
    //          {
    //         cout<<"ERROR!Finding average is not possible."<<endl;
    //         }


    //********Example-03***********using initializer list as a collection
    // for(auto test_score:{90,80,98,87})
    //     cout<<test_scores<<endl;


    //*********Example-04*********
    // for(auto name: "Foyez Ahmed Dewan")
    //     // if(name != ' ')
    //     cout<<name;

    //example-05:range based for loop for 2D vector*********

    vector<vector<int>>test_scores {
                                        {1,2,3},
                                        {10,20,30},
                                        {100,200,300}
                                   };

    for(auto score:test_scores)
    {
        for(auto marks:score)
        {
            cout<<marks;
            cout<<endl;
        }
    }
    

    return 0;
}