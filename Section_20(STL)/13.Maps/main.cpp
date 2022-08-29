#include<bits/stdc++.h>
using namespace std;

void display(const map<string,set<int>>&m){
    cout<<"[ ";
    for(auto &ele:m){
        cout<<ele.first<<":(";
        for(auto &set_ele:ele.second)
            cout<<set_ele<<" ";
        cout<<") ";
    }
    cout<<" ]\n";
}

template<typename T1,typename T2>
void display(const map<T1,T2>&m){
    cout<<"[ ";
    for(const auto &ele:m)
        cout<<ele.first<<": "<<ele.second<<" ";
    cout<<" ]\n";
}

int main(){
    printf("*****************Test1**************\n");
    map<string,int>m {
        {"dipe",1},         //key=first element,value=2nd element
        {"foyez",2},        //data holds in ascending order according to KEY
        {"asif",3}
    };
    //assignning value to maps
    // m={
    //     {"dipe",1},
    //     {"foye",2},
    //     {"aa",3}
    // };
    display(m);

    //insert 
    pair<string,int> p1{"helis",6};
    m.insert(p1);
    display(m);

    m.insert(pair<string,int>{"boby",4});
    display(m);

    m.insert(make_pair("poly",8));  //*****
    display(m);
    //assign,increment
    m["denis"]=7;   //denis is a key,if denis is availabele on the map then value will change,
    display(m);     //else key "denis" and and value 7 will insert to map

    m["foyez"]=1;
    display(m);
    m["foyez"]+=20;
    display(m);
    //erasing element
    m.erase("foyez");   //m.erase(the key we want to delete);
    display(m);
    //count
    cout<<"\ncount for asif: "<<m.count("asif");
    cout<<"\ncount for foyez: "<<m.count("foyez");
    //find specific key
    auto it=m.find("dipe");
    if(it!=m.end())
        cout<<"\nFound : "<<it->first<<": "<<it->second;
    m.clear();  //cleared map ,now size is 0

    cout<<"\n\n**********test2********"<<endl;
    map<string,set<int>>marks; //key is string and value is a set of integar
    marks={
        {"foyez",{80,90}},
        {"dipe",{90,70}},
        {"asif",{97,77,89}}
    };
    display(marks);
    //insert
    marks["foyez"].insert(83);
    display(marks);
    auto it1=marks.find("dipe");
    if(it1 != marks.end()){
        it1->second.insert(80);
    }
    display(marks);
   

return 0;
}