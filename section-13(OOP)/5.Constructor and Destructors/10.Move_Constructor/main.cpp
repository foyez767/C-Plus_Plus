#include<iostream>
#include<vector>

class Move{
    private:        
        int *data;
    public:
    //methods
        void set_value(int d){
            *data=d;
        }
        int get_value(){

        return *data;
        }
        //constructor
        Move (int d);
        //Deep Copy Constructor
        Move(const Move &source);
        //Move Copy Constructor
        Move (Move &&source) noexcept ;   //**no const and double ampersand**
        //noexcept tells the compiler that the method (the move constructor) will not throw an exception.
        //Destructor
        ~Move();

};

//Constructor implementation
Move::Move(int d){
    data=new int;   //allocating storage
    *data=d;
    std::cout<<"Constructor for"<<d<<std::endl;
}
//Deep copy Constructor
Move::Move (const Move &source)
        :Move{*source.data} {
    std::cout<<"Deep copy Constructor for "<<*data<<std::endl;

}
// Move copy Constructor
Move::Move(Move &&source) noexcept
    :data {source.data} {
        source.data=nullptr;
    std::cout<<"Move constructor for "<<*data<<std::endl; 
    }
//Destructor implementation'
Move::~Move(){
    if (data != nullptr) {
        std::cout << "Destructor freeing data for: " << *data <<std:: endl;
    } else {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete data;
}

int main(){

    std::vector<Move>vec;

    vec.push_back(Move {10});
    // vec.push_back(Move {20});
    // vec.push_back(Move {30});
    // vec.push_back(Move {40});


    return 0;
}