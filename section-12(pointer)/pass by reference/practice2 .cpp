#include<iostream>
#include<vector>

int main(){
    //*****NOT using reference in vector****
    std::vector<std::string> brothers_name {"Kader","Foyez","Parvez","Forhad"};

    for(auto v:brothers_name)
        v="Abul";   //we want to change all vector element to Abul but here v is a copy of brothers name 
                    //so whatever we are wanted to changing ,it will occur in copy NOT actual one 
                    //it means vector element remain SAME
    for(auto v:brothers_name)
        std::cout<<v<<std::endl;

    //******using reference in vector****
    // for(auto &v:brothers_name)  //we are using reference operator(&),so v is not a copy now
    //                         //v is an alias to vector of string,so whatever we are changing ,it will changed the actual one ,here brothers_name
    //     v="Abul";
    
    // for(auto const v:brothers_name) //const keyword so that when we display vector element we mistakenly can not change the element of vector
    //     std::cout<<v<<std::endl;

   
return 0;
}