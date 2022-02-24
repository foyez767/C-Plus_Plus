//function overloading

#include<iostream>
#include<string>
#include<vector>
//function prototype
void print(int =100);
void print(double);
void print(char);
void print(std::string);
void print(std::string,std::string);
void print(std::vector<std::string>);

//function defination
void print (int num){
    std::cout<<"Printing int: "<<num<<std::endl;
}

void print (double num){
    std::cout<<"Printing double: "<<num<<std::endl;
}

void print(char c){
    std::cout<<"Printing char: "<<c<<std::endl;
}

void print(std::string name){
    std::cout<<"Printing string : "<<name<<std::endl;
}

void print(std::string name,std::string name2){
    std::cout<<"printing dual string :"<<name<<", "<<name2<<std::endl;
}

void print (std::vector<std::string>three_stooges){
    std::cout<<"Printing vector of strings: ";
    for(auto v:three_stooges)
        {
            std::cout<<v<<" ,";
        }
}

int main(){
    print();
    print(10);       //int
    print('A');     //char

    print(12.30);   //double
    print(12.67F);      //float is promoted to double

    print("Foyez Ahmed");
    print("Foyez","Ahmed");

    std::vector<std::string>three_stooges {"Kader","Foyez","Forhad"};
    print(three_stooges);
    return 0;
}