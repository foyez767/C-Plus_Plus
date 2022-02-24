#include<iostream>
using namespace std;

int main(){
    //******example-01********

    // cout<<"Enter a positive number: ";
    // int num {0};
    // cin>>num;
    
    // while(num>0)
    // {
    //     cout<<num<<endl;
    //     --num;
    // }

    //*******example-02************

//     cout<<"Enter a positive number: ";
//     int num {0};
//     cin>>num;
//     int i {1};

//     while(num>=i)
//     {
//         cout<<i<<endl;
//         i++;
//     }

    //******example-03*********

    // cout<<"Enter a number less than 100: ";
    // int num {0};
    // cin>>num;

    // while(num>=100)
    // // while (!(num< 100))
    // {
    //     cout<<"Enter a number less than 100: ";
    //     cin>>num;
    // }
    // cout<<"Thank you! You entered: "<<num<<endl;

    //******example -04**********
    bool done {false};
    int number{0};

    while(!done)
    {
        cout<<"Enter a number between 1 to 5: ";
        cin>>number;

        if(number<=1 || number >=5)
        {
            cout<<"Sorry!try again."<<endl;
        }
        else
        {
            cout<<"Thanks!You entered: "<<number;
            done = true;
        }
             
    }
    return 0;
}