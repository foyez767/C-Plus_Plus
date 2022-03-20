#include<iostream>
#include<string>
#include<vector>

template<typename T>
class Item{
    private:
        std::string name;
        T value;
    public:
        Item(std::string name_val,T val)
            :name {name_val},value {val}{

            }
        std::string get_name() const {return name;}
        T get_value() const {return value;}

};

template<typename T1,typename T2>
class My_pair{
    public:
        T1 first;
        T2 second;
};


int main(){
    Item <int> item1 {"Foyez",100};
    std::cout<<item1.get_name()<<" "<<item1.get_value()<<std::endl;

    Item <std::string> item2 {"Foyez","Student"};
    std::cout<<item2.get_name()<<" "<<item2.get_value()<<std::endl;

    Item <Item<std::string>> item3 {"Foyez",{"Ahmed","Dewan"}};
    std::cout<<item3.get_name()<<std::endl;
    std::cout<<item3.get_value().get_name()<<std::endl;
    std::cout<<item3.get_value().get_value()<<std::endl;

    std::cout<<"=============================="<<std::endl;
    
    std::vector<Item<double>> vec{};
    vec.push_back(Item<double> {"Larry",10.0});
    vec.push_back(Item<double> {"Moe",20.00});
    vec.push_back(Item<double> {"Curly",30.0});
    
    for(const auto v:vec)
        std::cout<<v.get_name()<<" "<<v.get_value()<<std::endl;

    std::cout<<"=============================="<<std::endl;
    My_pair<int,double> p1 {10,20.35};
    My_pair<std::string,int> p2 {"Foyez",100};
    std::cout<<p1.first<<" "<<p1.second<<std::endl;
    std::cout<<p2.first<<" "<<p2.second<<std::endl;


    return 0;
}