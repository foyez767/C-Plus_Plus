#include<iostream>
// #include<vector>
#include<string>

using namespace std;

int main(){
    string S0 {};
    string S1 {"Apple"};
    string S2 {"Banana"};
    string S3 {"Kiwi"};
    string S4 {"apple"};
    string S5 {S1};
    string S6 {S1,0,3};   //S6 er initial value=index '0' theke start hobe,kintu length hobe 3
    string S7 (10,'X');   //10 ta X asve
    string my_name {};

//***example-01
    // cout<<S6<<endl;
    // cout<<S6.length()<<endl;

//***example-02:initialization
    // cout<<"S0 initialized to "<<S0<<endl;
    // cout<<"S1 initialized to "<<S1<<endl;
    // cout<<"S2 initialized to "<<S2<<endl;
    // cout<<"S3 initialized to "<<S3<<endl;
    // cout<<"S4 initialized to "<<S4<<endl;
    // cout<<"S5 initialized to "<<S5<<endl;
    // cout<<"S6 initialized to "<<S6<<endl;
    // cout<<"S7 initialized to "<<S7<<endl;

//***example-03:comparision
    // cout<<boolalpha;
    // cout<<S1<<" == "<<S5<<" : "<<(S1==S5)<<endl;
    // cout<<S1<<" == "<<S2<<" : "<<(S1==S2)<<endl;
    // cout<<S1<<" != "<<S2<<" : "<<(S1!=S2)<<endl;
    // cout<<S1<<" < "<<S2<<" : "<<(S1<S2)<<endl;
    // cout<<S1<<" > "<<S2<<" : "<<(S1>S2)<<endl;
    // cout<<S4<<" < "<<S5<<" : "<<(S1<S5)<<endl;
      

//***example-04:assignment
    // S1 = "Watermelon";
    // cout<<"S1 is now : "<<S1<<endl;

    // S2=S1;
    // cout<<"S2 is now : "<<S2<<endl;

    // S3="Foyez";
    // cout<<"S3 is now : "<<S3<<endl;

    // S3 [0]='P';
    // cout<<"S3 first letter change to 'P': "<<S3<<endl;

    // S3.at(0)='P';
    // cout<<"S3 first letter change to 'P': "<<S3<<endl;


//***example-05:concatenation

    // S3=S1+" and "+S2+" juice";
    // cout<<"S3 is now: "<<S3<<endl;

    //  S3="cold"+ " nice " +S1;   //***here cold,nice both are C style string literal..they dont work with + operator..so compiler error will occur


//***example-06: looping
 
// my_name="Foyez Ahmed Dewan";

// for(size_t i {0}; i<my_name.length(); i++)
//     {
//         cout<<my_name.at(i);          //or my_name[i];
//     }

    // ***range based for loop
    // for(auto name:my_name)
    //     {
    //         cout<<name;
    //     }
    
//***example-07:substrings .....substr length= after deletation how many character i want to have
    // my_name="Foyez Ahmed Dewan";

    // cout<<my_name.substr(0,4)<<endl;
    // cout<<my_name.substr(6,2)<<endl;
    // cout<<my_name.substr(10,3)<<endl;
    
//***example-08:erase; erase length=how many characters to delete
    // my_name="Foyez Ahmed Dewan";
    
    // cout<<my_name.erase(0,4)<<endl;
    // cout<<my_name.erase(6,2)<<endl;
    // cout<<my_name.erase(10,3)<<endl;

//***example-09: getline function to take input
    // string full_name {};
    // cout<<"Enter your full name : ";
    // // cin>>full_name;                 //***It will not take input after a space
    // // getline(cin,full_name);
    // getline(cin,full_name,'h');       //***It will not take input after the "h" letter
    // cout<<"Your full name is : "<<full_name<<endl;


//***example-10:find() 
    // S1="He is a good boy";

    // string word{};
    // cout<<"Enter the word you want to find: ";
    // cin>>word;

    // size_t position = S1.find(word);
    
    // if(position != string::npos)
    //     cout<<"Found "<<word<<" at position: "<<position<<endl;
    // else
    //     cout<<"Sorry! "<<word<<" not found."<<endl;


    //****string::npos is a special value that is defined in the C++ string library. 
    //The string functions that search strings for substring, characters, etc. typically return the position in the string of the item they are searching for if found. 
    //However, if the search item is not found then string::npos is returned so we can check it pretty easily.

//***example of vector

    // vector<string>fruits {"Apple","Banana","Orange"};

    // cout<<fruits.at(0)<<endl;
    // cout<<fruits.at(0).at(0)<<endl;


//***example 11:insert function

//type-01:object.insert(start_index,"what i want to add")

    // string str1= "javat tutorial";  
    // cout<<"String contains :" <<str1<<endl;  
    // str1.insert(5,"point");
    // cout<<"After insertion, String value is : "<<str1;  

//type-02:

    // string str1 = "C++  is a language";  
    // string str2 = "programming";  
    // cout<<"String contains :" <<str1<<'\n';  

    // cout<<"After insertion, String is :"<< str1.insert(9,str2,0,11);


//***example-12:swap function:::string1.swap(string2) use korle string1,string2 er man swap hobe//

    // string first_name = "Dewan";  
    // string last_name = "Foyez" ;
    // cout<<"Before  swap first name: "<<first_name<<endl;  
    // cout<<"Before  swap last name: " << last_name<<endl;  
    // first_name.swap(last_name);  
    // cout<< "After  swap first name : " << first_name<<endl;;  
    // cout<< "After  swap last name : " <<last_name<<endl;
    
    //***how to clear a string
    // first_name.clear();
    // cout<<first_name;
    return 0;
}
