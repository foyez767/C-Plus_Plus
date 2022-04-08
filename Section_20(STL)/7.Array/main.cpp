#include<iostream>
#include<algorithm>
#include<numeric>
#include<array>

//display all array elements
void display(std::array<int,5> &arr){
    std::cout<<"[ ";
    for(const auto &i:arr)
        std::cout<<i<<" ";
    
    std::cout<<" ]"<<std::endl;
}

void test1(){
    std::cout<<"test1=========================="<<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5};
    std::array<int,5> arr2;

    display(arr1);
    display(arr2);  //garbage value since arr2 is not initialized

    arr2={10,20,30,40,50};

    display(arr1);
    display(arr2);

    //containername.size()  returns the size of container/how many elemnets are in containers
    std::cout<<"Size of arr1: "<<arr1.size()<<std::endl;
    std::cout<<"Size of arr2: "<<arr2.size()<<std::endl;
    //using subscript or at method to assigning value
    arr1[0]=1000;
    arr1.at(1)=2000;

    display(arr1);

    //front =first element of that container
    //back= last element of that container
    std::cout<<"Front of arr2: "<<arr2.front()<<std::endl;
    std::cout<<"Back of arr2: "<<arr2.back()<<std::endl;
}

void test2(){
    std::cout<<"test2======================"<<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5};
    std::array<int,5> arr2 {10,20,30,40,50};

    display(arr1);
    display(arr2);
    //fill(x) converts all values of that container to x
    arr1.fill(0);
    display(arr1);
    display(arr2);

    //swap funtion swap value of two container but remember container size must be same
    arr1.swap(arr2);
    display(arr1);
    display(arr2);
}

void test3(){
    std::array<int,5> arr {1,2,3,4,5};
    //ptr is a pointer to an integar
    //data() function returns the address of the first element of raw array
    int *ptr=arr.data();
    *ptr=1000;

    display(arr);
}

void test4(){
    std::array<int,5> arr {2,1,4,5,3};
    display(arr);
    //sort() function sorted all elements in container to asscending
    std::sort(arr.begin(),arr.end());

    display(arr);
}

void test5(){
    std::array<int,5> arr {2,1,1,4,5};

    //min_element and max_element determine which one is smaller and longer in a container respectively
    //they doesn't return any value,they return an iterator pointing to the smallest and largest one respectively
    std::array<int,5>::iterator min_num=std::min_element(arr.begin(),arr.end());
    auto max_num=std::max_element(arr.begin(),arr.end());

    std::cout<<"min: "<<*min_num<<"  max:"<<*max_num<<std::endl;    //remember to dereference
}

void test6(){
    std::array<int,5> arr {1,2,5,4,3};

    //to use accumulate ,we need to add #include<numeric>
    int sum {0};
    sum=std::accumulate(arr.begin(),arr.end(),0);   //std::accumulate(start_iterate,end_iterate,starting_value_of_sum)

    std::cout<<"sum of all elemnets are : "<<sum<<std::endl;
}

void test7(){
    std::array<int,10> arr {1,2,3,3,2,1,3,4,3,4};

    int cnt=std::count(arr.begin(),arr.end(),3);
    std::cout<<"Found 3 : "<<cnt<<" times"<<std::endl;
}

void test8(){
    std::array<int,10> arr {1,2,30,40,50,100,200,300,400,30};

    //determine how many numbers are between 10 and 100(inclusive)
    int count=std::count_if(arr.begin(),arr.end(),[](int x){return (x>=10 && x<=100);});

    std::cout<<" There are "<<count<<" numbers between 10 and 100"<<std::endl;          
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

    return 0;
}