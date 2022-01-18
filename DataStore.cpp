#include "DataStore.h"

// Create films map
std::map<string, json> films { {"2", {"title", "the matrix"}}, {"1", {"title", "pulp fiction"}}, {"3", {"title", "gremlins"}} };
//json j_films(films);

// Print films map
void print() {
    for (auto it = films.begin(); it != films.end(); ++it) {
        std::cout << it->first << " : " << it->second << "\n";
    }
}

void add(string key, json value ) {
    films.insert(make_pair(key, value));
    //j_films.push_back((pair<string,string>)make_pair(key, value));
}
