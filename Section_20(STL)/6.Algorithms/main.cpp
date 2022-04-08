#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cctype>

//find an element in a container
void find_test(){
    std::vector<int>vec {1,2,3,4,5};

    std::vector<int>::iterator loc=std::find(vec.begin(),vec.end(),3);
    //find function determine the first occurance of an element and returns an iterators pointing to that element
    if(loc != vec.end())
        std::cout<<"Found number : "<<*loc<<std::endl;
    else
        std::cout<<"Not found"<<std::endl;

}
//find the number of occurance of an element in a container
void count_test(){
    std::vector<int>vec {1,2,1,2,1,3,1,4,5};

    int num=count(vec.begin(),vec.end(),1);
    //count is a function which return number of occurance of element in a container
    std::cout<<"Found 1 "<<num<<" times"<<std::endl;

}

//Returns the number of elements in the range [first, last) satisfying specific criteria.
void count_if_test(){
    std::vector<int>vec {1,2,3,4,5,2,1,6,8,9,7,5};
    //using lamda expression to count how many elements are divisible by 2/even
    int num=count_if(vec.begin(),vec.end(),[](int x){ return x%2==0;});
    std::cout<<num<<" numbers are divisible by 2"<<std::endl;   //5

    //using lamda expression to count how many elements are odd
    int num2=count_if(vec.begin(),vec.end(),[](int x){ return x%2 != 0;});
    std::cout<<num2<<" numbers are odd"<<std::endl;      //7

    //how many elements in vector are >=5;
    int num3=count_if(vec.begin(),vec.end(),[](int x){ return x>=5;});
    std::cout<<num3<<" numbers are found that is greater than 5"<<std::endl;

}
//replace an element with another value
void replace_test(){
    std::vector<int>vec {1,2,3,1,5,1};
    std::cout<<"[ ";
    for(auto v:vec)
        std::cout<<v<<" ";
    std::cout<<" ]"<<std::endl;
//replace 1 with 100
std::replace(vec.begin(),vec.end(),1,100);
std::cout<<"[ ";
    for(auto v:vec)
        std::cout<<v<<" ";
    std::cout<<" ]"<<std::endl;

}
//all of funtion determine if all the elements in a container satisfied an equation
void all_of_test(){
    std::vector<int>vec{1,2,6,9,19,3,17,8};
    //if all elements are greater than 10
    if(all_of(vec.begin(),vec.end(),[](int x){return x>10;})){
        std::cout<<"All elements are greater than 10"<<std::endl;
    }else{
        std::cout<<"All elements are NOT greater than 10"<<std::endl;
    }

    //now check if any of the elements are greater than 10
    if(any_of(vec.begin(),vec.end(),[](int x){return x>10;}))
        std::cout<<"There are element which is greater than 10"<<std::endl;
    else
        std::cout<<"All elements are less than 10"<<std::endl;
    
}

//transform elements in a container
void transform_test(){
    std::string str {"c++ programming"};

    std::cout<<"Before transform: "<<str<<std::endl;

    std::transform(str.begin(),str.end(),str.begin(),::toupper);

    std::cout<<"After transform: "<<str<<std::endl;
}


int main(){

// find_test();
// count_test();
// count_if_test();
// replace_test();
// all_of_test();
// transform_test();

}