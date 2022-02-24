//pass by value
#include<iostream>
#include<string>
#include<vector>

void pass_by_value(int num,int another_num){
    num =100;
    another_num =1000;
}
void pass_by_value2(std::string name){
    name="Dewan";
}
void pass_by_value3(std::vector<std::string>brothers){
    brothers.clear();   //delete all vector elements
}
void print_vector_element(std::vector<std::string>brothers){
    for(auto s:brothers)
        std::cout<<s<<" ";
}
int main(){
    int num {10};
    int another_num {20};
    std::cout<<"Num before calling pass by value :"<<num<<std::endl;
    std::cout<<"Anothe num before calling pass by value :"<<another_num<<std::endl;
    pass_by_value(num,another_num);
    std::cout<<"\nNum after calling pass by value  :"<<num<<std::endl; 
    std::cout<<"Another num after calling pass by value  :"<<another_num<<std::endl;

    std::string my_name {"Foyez"};
    std::cout<<"\nMy name before calling pass by value2: "<<my_name<<std::endl;
    pass_by_value2(my_name);
    std::cout<<"My name before calling pass by value2: "<<my_name<<std::endl;

    std::vector<std::string>brothers {"Kader","Foyez","Parvez","Forhad"};
    std::cout<<"\nBrothers name before calling pass by value 3: ";
    print_vector_element(brothers);   //to print vector element here i call another function
    pass_by_value3(brothers);
    std::cout<<"\nBrothers name after calling pass by value3: ";
    print_vector_element(brothers);

    return 0;
}