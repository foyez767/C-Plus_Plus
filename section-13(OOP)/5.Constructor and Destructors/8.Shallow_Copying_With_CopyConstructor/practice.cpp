#include<iostream>

class Shallow{
    private:
        int *data;
    public:
    //methods
        void set_data (int d) {*data=d;}
        int get_data(){return *data;};
    // constructor
    Shallow(int d);
    //Copy Constructor
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();
};
    //Constructor implementation
    Shallow::Shallow (int d){
        data=new int;   //dynamically allocate space for integar d
        *data=d;
    }
//Shallow copy constructor
    Shallow::Shallow(const Shallow &source)
        :data {source.data} {
            std::cout<<"Copy constructor-Shallow copy"<<std::endl;
        }
    //Destructor for releasing memory
    Shallow::~Shallow(){
        delete data;
        std::cout<<"Releasing space"<<std::endl;
    }

void display_data(Shallow p){
   std::cout<< p.get_data()<<std::endl;

}

int main(){

    Shallow foyez {100};
    display_data(foyez);

    Shallow frank {foyez};
    frank.set_data(1000);
    display_data (frank);
      
    return 0;
}