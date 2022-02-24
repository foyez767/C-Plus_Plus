#include <iostream>
#include "Movies.cpp"

// Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" <<  std::endl;
    }
}

int main() {
    
    Movies my_movies;
    
    my_movies.display_movie();

    add_movie(my_movies,"Hera_pheri","PG", 2);

    my_movies.display_movie();

    increment_watched(my_movies,"Hera_pheri");    
    my_movies.display_movie();
    
    add_movie(my_movies,"Triangle","PG-13",1);
    add_movie(my_movies,"Intersteller","PG",2);
    add_movie(my_movies,"Inception","PG",4);
    add_movie(my_movies,"Tenet","PG",5);

    my_movies.display_movie();

    increment_watched(my_movies,"Tenet");
    increment_watched(my_movies,"Card_game");

    my_movies.display_movie();

	return 0;
}