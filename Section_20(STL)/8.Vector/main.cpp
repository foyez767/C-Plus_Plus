#include<iostream>
#include<algorithm>
#include<vector>

//display vector element
void display(std::vector<int> &vec){
    std::cout<<"[ ";
    std::for_each(vec.begin(),vec.end(),[](int x){ std::cout<<x<<" ";});
    std::cout<<"]"<<std::endl;
}

void test1(){
    std::cout<<"test1================="<<std::endl;
    std::vector<int> vec {1,2,3,4};
    display(vec);

    vec={100,200,300,400};
    display(vec);

    std::vector<int> vec2 (10,100); //10 integar all initialized to 100
    display(vec2);
}

void test2(){
    std::cout<<"test2========================"<<std::endl;
    std::vector<int>vec{1,2,3,4,5};
    display(vec);

    std::cout<<"\nvec size: "<<vec.size()<<std::endl;
    std::cout<<"vec max size: "<<vec.max_size()<<std::endl;
    std::cout<<"vec capacity: "<<vec.capacity()<<std::endl;

    vec.push_back(6);   //add an element
    display(vec);

    std::cout<<"\nvec size: "<<vec.size()<<std::endl;
    std::cout<<"vec max size: "<<vec.max_size()<<std::endl;
    std::cout<<"vec capacity: "<<vec.capacity()<<std::endl;

    vec.pop_back(); //remove one element from last 
    display(vec);

    vec.shrink_to_fit();    //this function makes capacity=size
    display(vec);
    std::cout<<"\nvec size: "<<vec.size()<<std::endl;
    std::cout<<"vec max size: "<<vec.max_size()<<std::endl;
    std::cout<<"vec capacity: "<<vec.capacity()<<std::endl;

    vec.reserve(100);      //reserve(x) here x refers to the capacity of vector

    std::cout<<"\nvec size: "<<vec.size()<<std::endl;
    std::cout<<"vec max size: "<<vec.max_size()<<std::endl;
    std::cout<<"vec capacity: "<<vec.capacity()<<std::endl;
}

void test3(){
    std::cout<<"test3========================"<<std::endl;
    std::vector<int> vec {1,2,3,4,5};

    vec[0]=100;
    vec.at(1)=200;

    display(vec);
}

void test4(){
    std::cout<<"test4========================"<<std::endl;
    std::vector<int>vec{1,2,3,4,5};
    display(vec);

    vec.clear();    //delete all the elements from the vector
    display(vec);

    vec={1,2,3,4,5,6,7,8,9};
    vec.erase(vec.begin(),vec.begin()+2);   //erase (start_point,end_point); remove all elements between this range

    display(vec);

    vec={1,2,3,4,5,6,7,8,9};
    //erase all even numbers
    auto it=vec.begin();
    while(it != vec.end()){
        if(*it %2 ==0)
            vec.erase(it);
        else 
            it++;
    }
    // for(int i=0;i<vec.size();i++){
    //     if(vec[i]%2==0){
    //         vec.erase(vec.begin()+i);
    //     }
    // }

    display(vec);
}

void test5(){
    std::cout<<"test5========================"<<std::endl;
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50};

    display(vec1);
    display(vec2);

    vec1.swap(vec2);    //swapping all vector elements of vec1 and vec2
    //here they must be of same type but there size can be different from each other

    display(vec1);
    display(vec2);
}

void test6(){
    std::cout<<"test6========================="<<std::endl;
    std::vector<int> vec{1,5,3,4,2,4};
    display(vec);
    //sort function sort all vector elements in assending
    std::sort(vec.begin(),vec.end());

    display(vec);

}

void test7(){
    std::cout<<"test7========================"<<std::endl;
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20};

    display(vec1);
    display(vec2);
    //copying vec1 element from begin to end and insert them to vec2
    std::copy(vec1.begin(),vec1.end(),std::back_inserter(vec2));

    display(vec1);
    display(vec2);

    //copy_if the elements are even
    vec1={1,2,3,4,5,6,7,8,9};
    vec2={10,20};

    display(vec1);
    display(vec2);

    std::copy_if(vec1.begin(),vec1.end(),std::back_inserter(vec2),[](int x){ return x%2==0;});

    display(vec1);
    display(vec2);
}

void test8(){
    std::cout<<"test8========================"<<std::endl;
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50};
    std::vector<int> vec3;
    //1*10,2*20,3*30,4*40,5*50 and store the result in vec3

    std::transform(vec1.begin(),vec1.end(),vec2.begin(),std::back_inserter(vec3),[](int x,int y){ return x*y;});

    display(vec3);
}

void test9(){
    std::cout<<"test9======================="<<std::endl;
    //insert vec2 into vec1 before 5
    std::vector<int> vec1 {1,2,3,4,5,6,7,8,9};
    std::vector<int> vec2 {10,20,30,40};

    display(vec1);
    display(vec2);

    auto it=std::find(vec1.begin(),vec1.end(),5);

    if(it != vec1.end()){
        std::cout<<"Inserting....."<<std::endl;
        vec1.insert(it,vec2.begin(),vec2.end());
        // vec1.insert(it,10,200);
        // vec1.insert(it,10);


    }else{
        std::cout<<"Sorry! 5 not found in vec1"<<std::endl;
    }

    display(vec1);
    display(vec2);


}

void test10(){
    std::vector<int>vec {1,2,1,3,1,3,4,1,2,10,2,30,34,12,14};

    int count=std::count(vec.begin(),vec.end(),1);

    std::cout<<"Found "<<count<<" times 1"<<std::endl;

    int count2=std::count_if(vec.begin(),vec.end(),[](int x){ return x>10;});

    std::cout<<"There are "<<count2<<" numbers which are greater than 10"<<std::endl;
}

void test11(){
    std::vector<int>vec{1,2,3,1,4,5,2,1};
    display(vec);

    std::replace(vec.begin(),vec.end(),1,100);
    display(vec);
}

void test12(){
    std::vector<int>vec{10,12,13,10,2,3,5,8};

    if(std::all_of(vec.begin(),vec.end(),[](int x){ return x>0;}))
        std::cout<<"All numbers are positive"<<std::endl;
    else
        std::cout<<"There are negative numbers"<<std::endl;
    
    std::vector<int>vec2 {10,2,1,34,-2,100};

    if(std::any_of(vec2.begin(),vec2.end(),[](int x){ return x<0;}))
        std::cout<<"There are negative numbers"<<std::endl;
    else
        std::cout<<"All numbers are positive"<<std::endl;

}

void test13(){
    std::vector<int> vec {1,2,3,4,5};
    display(vec);

    std::reverse(vec.begin(),vec.end());
    display(vec);
    
}

void test14(){
    std::vector<int>vec {1,2,3,4,5};

    std::cout<<"First element of vec: "<<vec.front()<<std::endl;
    std::cout<<"Last element of vec: "<<vec.back()<<std::endl;
}

void test15(){
    std::vector<int>vec{1,2,3,4,5};

    int *ptr=vec.data();
    *ptr=1000;
    display(vec);
}

void test16(){
    std::vector<int> vec;
    std::cout<<std::boolalpha;

    if(vec.empty())
        std::cout<<"Container is empty"<<std::endl;
    else
        std::cout<<"Container is not empty"<<std::endl;
}

void test17(){
    std::vector<int>vec {1,2,3};
    display(vec);

    vec.resize(5);  
    display(vec);

    vec.resize(2);
    display(vec);

    vec.resize(5,100);
    display(vec);
}

int main(){
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();
    // test8();
    // test9();
    // test10();
    // test11();
    // test12();
    // test13();
    // test14();
    test15();
    // test16();
    // test17();




    return 0;
}