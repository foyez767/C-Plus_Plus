#include<iostream>
#include<string>

int main(){
    std::string s1 {"Foyez"};
    std::string s2 {"Foyez"};
    std::string s3 {"Messi"};

    std::string *p1 { &s1};
    std::string *p2 { &s2};
    std::string *p3 { &s1};

    //******COMPARE*********
    std::cout<<std::boolalpha;
    //***compareing address
    std::cout<<p1<<" == "<<p2<<" :  "<<(p1==p2)<<std::endl; //false
    std::cout<<p1<<" == "<<p3<<" : "<<(p1==p3)<<std::endl;  //true
    //****compareing value
    std::cout<<*p1<<" == "<<*p2<<" : "<<(*p1==*p2)<<std::endl;  //true
    std::cout<<*p1<<" == "<<*p3<<" ; "<<(*p1==*p3)<<std::endl;  //true

    p3= &s3;
    std::cout<<*p1<<" == "<<*p3<<" : "<<(*p1==*p3)<<std::endl;  //false

    return 0;
}