#include<iostream>
using namespace std;

class Counter{
    private:
        int cnt=0;
    public:
    Counter (int x){
        cnt = x;
    }
    int getcnt(){return cnt;}
    int operator++(){
        cnt++;
        int x = cnt;
    return x;
    }
    int operator++(int){
        int x = cnt;
        cnt++;
    return x;
    }
    
};

int main(){
    Counter c (10);
    cout<< c.getcnt() <<endl;
    ++c;
    cout<< c.getcnt() <<endl;
    c++;
    cout<< c.getcnt() <<endl;
    Counter s = c++;
    cout<< c.getcnt() <<endl;
    cout<< s.getcnt() <<endl;
    Counter t = ++c;
    cout<<  t.getcnt() <<endl;
    cout<< c.getcnt() <<endl;

    return 0;
}