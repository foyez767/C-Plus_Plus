#include<iostream>
#include<vector>

void display_player_name (const std::vector<std::string> *const v){
    // (*v).at(0)="Foyez";  //i am changing vector element...to avoid it i should use vector data is constant
    ////v=nullptr;  //***i am changing v to null,that means i lost the vector address...to avoid i should use pointer is constant 
 for(auto s:*v)
    std::cout<<s<<" ";

}


int main(){
    std::vector<std::string> great_player {"Pele","Maradona","Messi"};
    display_player_name(&great_player);

    return 0;
}