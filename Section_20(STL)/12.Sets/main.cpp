#include<bits/stdc++.h>
using namespace std;

void display(set<int> &s){
    cout<<"[";
    for(auto v:s)
        cout<<v<<" ";
    cout<<"]\n";

}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    set<int> s {1,4,5,9};
    display(s);
    set<int> s1 {1,2,1,2,1,3,4,5,6,2};
    display(s1);    

    cout<<s.size()<<"\n";
    cout<<s1.size()<<"\n";


    s.insert(6);
    s1.insert(6);
    display(s);
    display(s1);

    s.erase(5);
    display(s);


    int cnt=s.count(5);
    cout<<cnt<<"\n";
    cout<<s1.count(6)<<"\n";


    auto it=s.find(5);
    if(it != s.end())
        cout<<"Found\n";
    else
        cout<<"Not found\n";


    s1.clear();
    display(s1);

    if(s.empty())
        cout<<"Empty file\n";
    else
        cout<<"Not Empty file\n";


    return 0;
}