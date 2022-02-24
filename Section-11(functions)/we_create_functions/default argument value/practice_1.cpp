//***default argument value
#include<iostream>
//using default value in prototype
double calc_cost(double base_cost=100,double tax_rate=0.06,double shipping=3.50);  
//function definitation
double calc_cost(double base_cost,double tax_rate,double shipping){
    return base_cost+=(base_cost*tax_rate)+shipping;
}

int main(){
    double total_cost {0};
    total_cost=calc_cost(100,0.07,4.60);                //will use no default value
    std::cout<<"Total cost: "<<total_cost<<std::endl;

    total_cost=calc_cost(100,0.07);                     //will use  shipping  default value
    std::cout<<"Total cost: "<<total_cost<<std::endl;

    total_cost=calc_cost(100);                         //will use both tax_rate and shipping default value
    std::cout<<"Total cost: "<<total_cost<<std::endl;

    total_cost=calc_cost();                             //will use all default value
    std::cout<<"Total cost: "<<total_cost<<std::endl;
    return 0;
}

////***example-02
// #include<iostream>
// #include<string>

// void greeting (std::string name,std::string prefix ="Mr",std::string suffix=" ",int age=0);

// void greeting (std::string name,std::string prefix,std::string suffix,int age){

//     std::cout<<"Hello "<<prefix+" "+name+" "+suffix+",You are "<<age<<" years old."<<std::endl;

// }
// int main(){

//     greeting("Foyez","Mr","PhD",19);
//     greeting("Alex","Mrs");
//     return 0;
// }