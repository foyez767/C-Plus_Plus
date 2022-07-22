#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;

template<typename T>
void display(list<T> li){
    cout<<"[ ";
    for(auto l:li){
        cout<<l<<" ";
    }
    cout<<"]"<<endl;
}

void test1(){
    list<int> li {1,2,3,4,5};
    display(li);

    list<string> li2;
    li2.push_back("Back");
    li2.push_front("Front");
    display(li2);

    list<int> li3;
    li3={1,2,3,4,5};
    display(li3);

    list<int> li4 (10,100);
    display(li4);
}

void test2(){
    list<int> li {1,2,3,4,5};
    display(li);

    cout<<"Size: "<<li.size()<<endl;
    cout<<"Front : "<<li.front()<<endl;
    cout<<"Back : "<<li.back()<<endl;

    li.clear();
    display(li);
    cout<<"Size: "<<li.size()<<endl;
}

void test3(){
    list<int> li {1,2,3,4,5,6,7,8,9};
    display(li);

    li.resize(5);
    display(li);

    li.resize(10);
    display(li);
}

void test4(){
    list<int> li {1,2,3,4,5,6,7,8,9};
    display(li);

    list<int>::iterator it=std::find(li.begin(),li.end(),6);    //it will pointing to 6 if 6 present in the list

    if(it != li.end()){
        li.insert(it,100);  //100 will insert before 6 but it still pointing to 6
    }
    display(li);

    list<int> li2 {1000,2000,3000};

    li.insert(it,li2.begin(),li2.end()); //li2 wil insert li before 6 and it still pointing to 6

    display(li);

    std::advance(it,-4);    //now i am saying to my iterator please point to left 4 from 6 so it is pointing now 100
    cout<<*it<<endl;

    std::advance(it,2); //NOw it will go two element in right from 100 and will pointing to 2000
    cout<<*it<<endl;

    li.erase(it);       //now it will remove the element it's pointing to and it is 2000,and the iterator will no longer VALID
    display(li);
}

int main(){
    // test1();
    // test2();
    // test3();
    test4();
    // test5();
    
    return 0;
}