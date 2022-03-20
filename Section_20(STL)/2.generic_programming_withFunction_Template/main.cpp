#include<iostream>
#include<string>

template<typename T>
T min(T a,T b){
return ((a<b)?a:b);
}

template<typename T1,typename T2>//T1 & T2 can be same type or different
void func(T1 a,T2 b){
    std::cout<<a<<" "<<b<<std::endl;
}
template<typename T>
void swap(T &a,T &b){
    T temp=a;
        a=b;
        b=temp;
}

class Person{
    friend std::ostream &operator<<(std::ostream &output,const Person &rhs){
        output<<rhs.name;
    return output;
    }
    public:
        std::string name;
        int age;
        //overloading operator
        bool operator<(const Person rhs) const {
            return this->age<rhs.age;
        }
};

int main(){
    std::cout<<min<int>(20,10)<<std::endl;
    std::cout<<min(20,10)<<std::endl;
    std::cout<<min(2.32,13.20)<<std::endl;
    std::cout<<min('A','B')<<std::endl;
    std::cout<<min(5+2*2,10/5*2)<<std::endl;

    func<int,int>(10,20);
    func(10,20);
    func(19.324,10);
    func(100,'A');
    func(100,std::string {"Frank"});


    int x {10},y{20};
    std::cout<<x<<" "<<y<<std::endl;
    swap(x,y);
    std::cout<<x<<" "<<y<<std::endl;


    Person p1 {"Foyez",20};
    Person p2 {"Frank",55};
    Person p3=min(p1,p2);
    std::cout<<p3.name<<" is yournger"<<std::endl;
    func(p1,p2);


    return 0;
}