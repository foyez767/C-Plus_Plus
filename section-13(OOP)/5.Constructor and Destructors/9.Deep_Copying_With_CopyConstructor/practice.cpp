#include<iostream>

class Deep{
    private:
        int *data;
    public:
    //methods
        void set_value(int d){*data=d;}
        int get_value(){return *data;}
    //constructor
       Deep(int d);
    //Deep Copy Constructor
    Deep(const Deep &source);
    //Destructor
    ~Deep();
};
//Constructor
Deep::Deep(int d){
            data=new int;
            *data=d;
        }

//deep copy constructor implementation
Deep::Deep(const Deep &source)/// source is a reference to the object being deep copied
    :Deep(*source.data){    //using constructor delegation//
    //***source.data is a pointer to an int so *source.data is the int points to***(*data) = *source.data
        std::cout<<"Deep constructor"<<std::endl;
    }
//Destructor implementation
Deep::~Deep(){
    delete data;
    std::cout<<"Releasing Memory"<<std::endl;
}

//Regular function
void display_data(Deep p){
    std::cout<<p.get_value()<<std::endl;
}

int main(){

    Deep foyez {100};
    display_data(foyez);

    Deep frank {foyez};
    frank.set_value(1000);
    display_data(frank);

return 0;
}
