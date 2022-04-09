#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<map>
using namespace std;

//display all vector elements
void display(vector<int>&vec){
    cout<<"[ ";
    for(auto v:vec){
        cout<<v<<" ";
    }
    cout<<" ]";
}

void test1(){
    vector<int>vec {1,2,3,4,5};

    auto it=vec.begin();
    cout<<*it<<endl;    //1
    it++;
    cout<<*it<<endl;    //2
    it+=2;
    cout<<*it<<endl;    //4
    it-=2;
    cout<<*it<<endl;    //2
    it=vec.end();
    cout<<*it<<endl;    //garbage 
    it=vec.end()-1;
    cout<<*it<<endl;    //5
}

void test2(){
    //display all vector elements with an iterators
    cout<<"==========================================="<<endl;
    vector<int>vec {1,2,3,4,5};

    vector<int>::iterator it=vec.begin();

    while(it != vec.end()){
        cout<<*it<<endl;
        it++;
    }

    //change all vector elements to 0
    it=vec.begin();

    while(it != vec.end()){
        *it=0;
        it++;
    }
    display(vec);

}

void test3(){
    //using const iterator
    vector<int>vec {1,2,3,4,5};

    vector<int>::const_iterator it=vec.begin(); //need to use const_iterator for a constant iterator
    // auto it=vec.cbegin();    //if you are useing auto then must provide 'c' before begin()
    
    while(it != vec.end()){
        cout<<*it<<endl;
        it++;
    }

    it=vec.begin();
    
    // while(it != vec.end()){
    //     *it=0;
    //      it++;
    // }
    /*when we try to change the value of vector elements ,we get an error ,it is because before we
    declare that this iterator is a constant and so it does not have ability to change the value of
    vector element*/


}

void test4(){
    //using reverse iterators
    vector<int>vec {1,2,3,4,5};

    auto it=vec.rbegin();   //'r' stands for reverse iterators

    while(it != vec.rend()){
        cout<<*it<<endl;
        it++;
    }

    //const reverse iterator over a list
    list<string>name {"larry","Moe","Curly"};

    auto it2=name.crbegin();    //pointing to curly
    cout<<*it2<<endl;
    it2++;                      //pointing to moe
    cout<<*it2<<endl;
    
    //iterators over a map
    map<string,string>favourites{
        {"Foyez","C++"},
        {"Frank","Java"},
        {"James","Football"}
    };
    auto it3=favourites.begin();
    while(it3 != favourites.end()){
        cout<<it3->first<<":"<<it3->second<<endl;
        it3++;
    }
    

}

void test5(){
    //iterates over a subset of containers
    vector<int>vec {1,2,3,4,5,6,7,8,9,10};

    auto first=vec.begin()+2;
    auto last=vec.end()-3;

    while(first != last){
        cout<<*first<<endl;
        first++;
    }

}

void test6(){
    //using for loop to display all vector elements with iterators
    vector<int>vec{1,2,3,4,5};

    vector<int>::iterator i;
    for(i=vec.begin();i<vec.end();i++){
        cout<<*i<<" ";
    }
}

int main(){

    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();

    return 0;
}