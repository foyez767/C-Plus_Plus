#include<bits/stdc++.h>
using namespace std;

template<typename T1,typename T2>
void display(map<T1,T2>&m){
    cout<<"[ ";
    for(auto &ele:m)
        cout<<"("<<ele.first<<", "<<ele.second<<")";
    cout<<" ]\n";
}

int main(){
    map<int,int>m;
    m={
        {3,10},
        {1,20},
        {2,30}
    };
    display(m);
    //insert
    m.insert(make_pair(5,40));
    display(m);
    pair<int,int>p{4,50};
    m.insert(p);
    m.insert(pair<int,int>(8,80));
    display(m);
    //assign
    m[5]=100;
    display(m);
    //increment
    m[5]+=100;
    display(m);
    cout<<"Size of map is: "<<m.size()<<endl;
    //erase
    m.erase(4); //key->4
    display(m);
    cout<<"Size of map is: "<<m.size()<<endl;
    //find
    auto it=m.find(5);
    if(it!=m.end()){
        cout<<"Found : ("<<it->first<<","<<it->second<<")\n";
    }
    m.clear();
    cout<<"Size of map is : "<<m.size()<<endl;
    
    return 0;
}