#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
using namespace std;

//using a template function to display any deque
template<typename T>
void display(std::deque<T> d){
    cout<<"[ ";
    for(auto v:d){
        cout<<v<<" ";
    }
    cout<<" ]";
    cout<<endl;
}

void test1(){
    std::deque<int> d {1,2,3,4,5};
    display(d);

    d={100,200,300,400};
    display(d);

    std::deque<int> d1(10,0);
    display(d1);

    d1[0]=100;
    d1.at(1)=200;
    display(d1);
}

void test2(){
    //push pops
    std::deque<int> d{0,0,0};

    display(d);
    d.push_back(10);
    d.push_back(100);
    display(d);

    d.push_front(10);
    d.push_front(100);
    display(d);

    cout<<"size: "<<d.size()<<endl;
    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back : "<<d.back()<<endl;

    d.pop_back();
    display(d);
    d.pop_front();
    display(d);
}

void test3(){
    vector<int> vec {1,2,3,4,5,6,7,8,9};
    deque<int> d;
    //insert all even numbers back of the deque and all  odd numbers front of the deque
    for(auto v:vec){
        if(v%2==0)
            d.push_back(v);
        else
            d.push_front(v);
    }
    display(d);
}

void test4(){
    //push_back vs push_front ordering
    vector<int>vec{1,2,3,4,5,6,7,8,9};
    deque <int> d;

    for(auto v: vec){
        d.push_back(v);
    }
    display(d);

    d.clear();

    for(auto v:vec){
        d.push_front(v);
    }
    display(d);
}

void test5(){
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    deque<int> d;

    std::copy(vec.begin(),vec.end(),std::back_inserter(d));
    display(d);

    d.clear();

    std::copy(vec.begin(),vec.end(),std::front_inserter(d));
    display(d);
}

int main(){
    // test1();
    // test2();
    // test3();
    // test4();
    test5();

    return 0;
}