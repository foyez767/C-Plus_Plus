#include<iostream>
#include<cctype>  //for character based function
#include<cstring> //for c style string

using namespace std;

int main(){
    char first_name [20] {};
    char last_name [20] {};
    char full_name [40] {};
    char temp [50] {0};

    // cout<<"Your first name: ";
    // cin>>first_name;
    // cout<<"Your last name: ";
    // cin>>last_name;

//***example-01
    // cout<<"Hello "<<first_name<<" ,Your first name have "<<strlen(first_name)<<" characters."<<endl;
    // cout<<" And your last name "<<last_name<<" has "<<strlen(last_name)<<" characters."<<endl;

// //***example-02
    // strcpy(full_name,first_name); //copying first name to full name
    // strcat(full_name," ");       //adding space to full name
    // strcat(full_name,last_name);  //adding last name to full name

    //  cout<<"Your full name is : "<<full_name<<endl;

// //***example-03
    // cout<<"Enter your full name: ";
    // cin>>full_name;
    // cout<<"Your full name is : "<<full_name<<endl;

// //***example-04
    // cout<<"Enter your full name: ";
    // cin.getline(full_name,40);           //use getline(variable_name,word_limit) function
    // cout<<"Your full name is : "<<full_name<<endl;

//***example-05:get full name ,copy it to temp then compare temp with full name
    // cout<<"Enter your full name: ";
    // cin.getline(full_name,40);  
    // cout<<"Your full name is : "<<full_name<<endl;

    // strcpy(temp,full_name);            //copying full name to temp
    // if(strcmp(temp,full_name)==0)      //compareing both temp and full name
    //     cout<<temp<<" and "<<full_name <<" are same.";
    // else
    //     cout<<temp<<" and "<<full_name<<" are different.";

//***example-06
    // cout<<"Enter your full name: ";
    // cin.getline(full_name,40);

    // for(size_t i {0}; i<strlen(full_name); i++)
    //     {
    //         if(isalpha(full_name[i]))
    //             full_name[i]=toupper(full_name[i]);
    //     }
    // cout<<"Your full name is: "<<full_name<<endl;

//***example-07
    // cout<<"Enter your full name: ";
    // cin.getline(full_name,40);

    // strcpy(temp,full_name);  
    // cout<<"Temp is now : " <<temp;
     
    // for(size_t i {0}; i<strlen(full_name); i++)
    //     {
    //         if(isalpha(full_name[i]))
    //             full_name[i]=toupper(full_name[i]);
    //     }
    // cout<<"\nFull name is now : "<<full_name<<endl;

    // if(strcmp(temp,full_name)==0)  
    //      cout<<temp<<" and "<<full_name <<" are same.";
    //  else
    //     cout<<temp<<" and "<<full_name<<" are different.";

    
    return 0;
}