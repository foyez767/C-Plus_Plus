#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
// //counting frequency
//     vector<long long>vec{1,2,1,3,4,5,1111111111111111111,22222222222,1111111111111111111};
//     map<long long,int>cnt;
//     for(int i=0;i<vec.size();i++){
//         cnt[vec[i]]++;
//     }
//     cout<<cnt[1111111111111111111]<<endl;
// //pair(key ,value)
//     for(auto v:cnt){
//         cout<<v.first<<" "<<v.second<<endl;
//     }
    //string count
    // vector<string>vec {"aaa","abc","def","ghi","abc","def"};
    // map<string,int>cnt;
    // for(auto u:vec) cnt[u]++;
    // for(auto v:cnt){
    //     cout<<v.first<<" "<<v.second<<endl;
    // }
    //unique element of vector
    // vector<int>vec {1,2,3,2,3,1};
    // map<int,int>mp;
    // for(auto v:vec)
    //     mp[v]=1;
    // for(auto v:mp)
    //     cout<<v.first<<" "<<v.second<<endl;  //here first element is key/unique value
    
    //determining word from a line of string
    string s;
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;
    vector<string>vec;
    string temp;
    for(int i=0;i<s.length();i++){
        if(isspace(s[i])){
            vec.push_back(temp);
            temp.clear();
        }else{
            temp+=s[i];
        }
    }
    vec.push_back(temp);    //last word tar jonno
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    
    return 0;
}