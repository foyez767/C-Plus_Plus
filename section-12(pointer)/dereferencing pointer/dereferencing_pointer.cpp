//***Dereferencing of pointer
#include<iostream>
#include<string>
#include<vector>

int main(){

//************//
    int score {10};
    int *pointer {&score};  //initialize pointer to address of score

    std::cout<<&score<<std::endl;   //address of score
    std::cout<<pointer<<std::endl;  //pointer hold the value..and the value is an address
    std::cout<<*pointer<<std::endl;  //we dereferencing the pointer so that we can see pointer points to which value
                                   // and here it is score initial value 10

// //***************//
    // int score {100};
    // int *pointer {&score};

    // std::cout<<*pointer<<std::endl; //dereferencing pointer

    // // score=200;
    // *pointer = 200;     //using dereferencing method to change the value of score
    // std::cout<<*pointer<<std::endl;
    // std::cout<<score<<std::endl;

//***************//
    // double high_temp {100.9};
    // double low_temp {23.67};

    // double *pointer {&high_temp};   //initialize pointer to high_temp address
    // std::cout<<pointer<<std::endl;  //memory address of high_temp
    // std::cout<<*pointer<<std::endl;  //100.9   //dereferencing

    // pointer = &low_temp;        //assigning value to pointer
    // std::cout<<pointer<<std::endl;  //memory address of low_temp
    // std::cout<<*pointer<<std::endl; //23.67

//************//
    // std::string my_name {"Foyez"};

    // std::string *pointer { &my_name};
    // std::cout<<pointer<<std::endl;  //address of my_name variable
    // std::cout<<*pointer<<std::endl; //"Foyez"  //dereferencing

    // my_name ="Messi";

    // std::cout<<*pointer<<std::endl;     //Messi

//*******************//
    // std::vector<std::string>brothers_name {"Kader","Foyez","Parvez","Forhad"};

    // std::vector<std::string> *pointer { &brothers_name};

    // std::cout<<brothers_name.at(1)<<std::endl;
    // std::cout<<(*pointer).at(1)<<std::endl;

    // // for(auto v: brothers_name)
    // for(auto v: *pointer)       //here i am showing how we can access vector element using pointer
    //     std::cout<<v<<" ";


    return 0;
}