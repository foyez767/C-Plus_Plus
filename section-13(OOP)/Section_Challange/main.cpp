#include <iostream>
#include "Movies.cpp"

// Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

/******************************************************************
 * increment_watched expects a reference to a Movies object 
 * and the name of the movie to increment the watched count
 *
 * If the watched count was incremented successfully it
*  displays a success message
*  otherwise the watched count could not be incremented
*  because the name of the movie was not found
 * ***************************************************************/

void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

/******************************************************************
 * add_movie expects a reference to a Movies object 
 * and the name of the movie, the rating and the watched count
 *
 * If the movie was successfully added to the movies object it
*  displays a success message
*  otherwise the movie was not added 
*  because the name of the movie was already in movies
 * ***************************************************************/
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
