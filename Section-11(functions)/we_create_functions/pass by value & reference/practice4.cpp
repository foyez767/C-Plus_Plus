//pass by reference
//***example-01
#include<iostream>

void pass_by_ref(int &,int&);

int main(){
    int x {10},y{20};
    std::cout<<"Before calling pass by reference x="<<x<<" y="<<y<<std::endl;
    pass_by_ref(x,y);
    std::cout<<"After calling pass by reference x="<<x<<" y="<<y<<std::endl;
    return 0;
}

// void pass_by_ref(const int &x,int &y){  //***If i use const type,then actual parameter can not be changed
 void pass_by_ref(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}


//***example-02-string
// #include<iostream>
// #include<string>

// void pass_by_ref(std::string &);

// int main(){
//     std::string my_name {"Foyez"};
//     std::cout<<"Before calling pass by reference,my name is : "<<my_name<<std::endl;
//     pass_by_ref(my_name);
//     std::cout<<"After calling pass by reference,my name is : "<<my_name<<std::endl;
//     return 0;
// }

// void pass_by_ref(std::string &name){
//     name="Kader";
// }


// //***example-vector
// #include<iostream>
// #include<string>
// #include<vector>
// //functon prototype
// void print_brothers_name (std::vector<std::string>);
// //void print_brothers_name (const std::vector<std::string>);

// void pass_by_ref (std::vector<std::string> &);

// int main(){
//     std::vector<std::string>brothers_name {"kader","Foyez","Parvez","Forhad"};
//     std::cout<<"Before calling pass by reference, brothers name are : ";
//     print_brothers_name(brothers_name);
//     pass_by_ref(brothers_name);
//     std::cout<<"\nAfter calling pass by reference,brothers name are: ";
// }

// void print_brothers_name( std::vector<std::string>brothers_name){
//     for(auto v:brothers_name)
//         std::cout<<v<<" ";
// }
// // void pass_by_ref(const std::vector<std::string> & change_name){
// void pass_by_ref(std::vector<std::string> & change_name){
//     change_name.clear();    //delete all vector elements
// }