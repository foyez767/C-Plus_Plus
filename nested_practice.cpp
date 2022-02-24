#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int num_items {};
    // cout<<"How many data items do you have? ";
    // cin>>num_items;

    // vector<int>data {};

    // for(int i {1}; i<=num_items; i++)
    // {
    //     int data_items {0};
    //     cout<<"Enter data items "<<i<<" : ";
    //     cin>>data_items;
    //     data.push_back (data_items);
       
    // }

    // cout<<"\nDisplaying histogram***"<<endl;
    // for(auto value:data)
    // {
    //     for(int i {1}; i<= value; i++)
    //     {
    //         if(i %5 ==0)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<"-";
    //         }
                
    //     }
    //  cout<<endl;
    // }


    //*******practicing**************
    // int numberOfItems {0};
    // cout<<"How many data do you have? ";
    // cin>>numberOfItems;

    // vector<int>allData {};

    // for(int i {1}; i<= numberOfItems; i++)
    // {
    //     int valueOfData {0};
    //     cout<<"Enter data item "<<i<<"no value: ";
    //     cin>>valueOfData;
    //     allData.push_back(valueOfData);
    // }

    // cout<<"\nDisplaying histogram "<<endl;
    // for(auto value:allData)
    // {
    //     for(int i {1}; i<=value; i++)
    //     {
    //         if (i %10 ==0)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<"-";
    //         }
    //      }
    //     cout<<endl;
    // }


    //***multiplication table with  for*********
        //   int num {0};
        //   cout<<"Which multipication table you want to see? ";
        //   cin>>num;
        //   for(int i {1}; i<=10 ;i++)
        //   {
        //       cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        //   }


        //*******************nested for loop practise:finding sum of product of all pairs of vector elements

        //  vector<int>vec {1,3,5,10};
        vector<int>vec {};
        int result {0};
 
        if(vec.size() != 0 && vec.size()>1)
            {
                for(int i {0}; i<vec.size();i++)
                    {
                        for(int j {i+1}; j<vec.size(); j++) //***look at initial value of j***
                            {
                                result=result+vec.at(i)*vec.at(j);
                            }
                    }
                    cout<<"Sum of all pair of product is : "<<result;
            }
        else
            {
                cout<<result;
            }
        
    return 0;
}