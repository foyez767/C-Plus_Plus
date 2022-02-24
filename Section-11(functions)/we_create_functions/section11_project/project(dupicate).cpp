//section 11 project
#include<iostream>
#include<vector>

//prototype
void display_list();
void printing_element(std::vector<double> &vector_element);
void adding_element(std::vector<double> &vector_element);
void calculating_average(std::vector<double> &vector_element);
void finding_smallest(std::vector<double> &vector_elementar );
void finding_largest(std::vector<double> &vector_element);
void clear_element(std::vector<double> &vector_element);
//function definitation

void display_list(){
        std::cout<<"\n*********Here is the list**********"<<std::endl;
        std::cout<<"P-Print numbers"<<std::endl;
        std::cout<<"C-CLEAR all elements"<<std::endl;
        std::cout<<"A-Add a number"<<std::endl;
        std::cout<<"M-Display Mean of the numbers"<<std::endl;
        std::cout<<"S-Display Smallest one"<<std::endl;
        std::cout<<"L-Display Largest one"<<std::endl;
        std::cout<<"Q-Quit"<<std::endl;

}

void get_selection(char &selection){

    std::cout<<"\nEnter your choice: ";
    std::cin>>selection; 
}

void printing_element (std::vector<double>  &vector_element){
    if(vector_element.size() !=0)
        {
            std::cout<<"Your data: [ ";
            for(auto vec:vector_element)
                {   
                    std::cout<<vec<<" ";
                }
                std::cout<<"]"<<std::endl;
        }
    else
        std::cout<<"[]-list is empty."<<std::endl;

}

void adding_element(std::vector<double> &vector_element){
        double add_numbers {};
        std::cout<<"Which number you want to add? ";
        std::cin>>add_numbers;
        vector_element.push_back(add_numbers);
        std::cout<<"Thank you."<<add_numbers<<"  added to list"<<std::endl;
              
        
}

void calculating_average(std::vector<double> &vector_element){
    double sum {};
    int size=vector_element.size();
    if(size==0)
        std::cout<<"There is no data,First add numbers "<<std::endl;
    else{
            for(auto vec:vector_element)
                {
                    sum+=vec;
                }
        std::cout<<"Average of all data is : "<<sum/size<<std::endl;
    }  
    
}

void finding_smallest(std::vector<double> &vector_element){
       int size=vector_element.size();
        if(size==0)
            std::cout<<"There is no data,First add numbers "<<std::endl;
        else{
                double smallest {vector_element.at(0)};
                for(auto vec:vector_element)
                    {
                        if(smallest>vec)
                             smallest=vec;
                    }
            std::cout<<"The smallest one is : "<<smallest<<std::endl;
        }
    

}

void finding_largest(std::vector<double> &vector_element){
    
    int size=vector_element.size();
    if(size==0)
        std::cout<<"There is no data,First add numbers "<<std::endl;
    else{
            double largest {vector_element.at(0)};
            for(auto vec:vector_element)
                {
                    if(largest<vec)
                         largest=vec;
                }
    std::cout<<"The largest one is : "<<largest<<std::endl;
    }
  
}

void clear_element(std::vector<double> &vector_element){
    vector_element.clear();
    std::cout<<"Cleaning on process....\nCLEAR!!!"<<std::endl;
}
    
int main(){
    char selection {};
    std::vector<double>vector_element {};
    // std::vector<double>vector_element {3,2,5};
    

   do{
        display_list();
        get_selection(selection);
        if(selection =='P' || selection =='p')      
            printing_element(vector_element);
        else if(selection =='A' || selection =='a')
            adding_element(vector_element);
        else if(selection =='M' || selection =='m')
            calculating_average(vector_element);
        else if(selection =='S' || selection =='s')
            finding_smallest(vector_element);
        else if(selection =='L' || selection =='l')
            finding_largest(vector_element);
        else if (selection =='C' ||selection=='c')
            clear_element(vector_element);
        else
            std::cout<<"Invalid..TRY again..."<<std::endl;

   }while(selection != 'Q' && selection != 'q');
   
    return 0;
}
