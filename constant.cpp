#include<iostream>
int main()
{
    std::cout<<"Foyez's carpet cleaning service"<<std::endl<<std::endl;
    std::cout<<"Number of small room : ";
    int Small_Room_Num;
    std::cin>>Small_Room_Num;
    std::cout<<"Number of big room : ";
    int Big_Room_Num;
    std::cin>>Big_Room_Num;

    const double Small_Room_Price {25};
    const double Big_Room_Price {35};
    const double cost= ((Small_Room_Num*Small_Room_Price)+(Big_Room_Num*Big_Room_Price));
    const double tax =(cost*6)/100;

    std::cout<<"The cost is = "<<cost<<std::endl;
    std::cout<<"The tax is = "<<tax<<std::endl;
    std::cout<<"Total estimate :"<<cost+tax<<"taka"<<std::endl;
    std::cout<<"The estimate is valid for 30 days!";
    return 0;
}