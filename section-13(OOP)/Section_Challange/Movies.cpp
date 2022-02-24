#include<iostream>
#include "Movies.h"

/*************************************************************************
    Movies no-args constructor
**************************************************************************/
Movies::Movies() {
}

/*************************************************************************
    Movies destructor
**************************************************************************/
Movies::~Movies() {
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for(Movie v:movies){
        if(v.get_name()==name)
            return false;
    }
Movie movie_object {name,rating,watched};
movies.push_back(movie_object);
return true;
}

bool Movies::increment_watched(std::string name) {
   for(Movie &v:movies){    //a reference to each one of those movie objects because if I find the one that matches, I need to change it
       if(v.get_name()==name){
           v.increment_watch_time();
            
           return true;
       }
   }
   return false;
}

void Movies::display_movie() const {
    if(movies.size()==0)
        std::cout<<"No movie in list"<<std::endl;
    else{
        std::cout<<"\n==============="<<std::endl;
        for(const Movie &v:movies){
            v.display();
        }
        std::cout<<"================"<<std::endl;

    }
   
}