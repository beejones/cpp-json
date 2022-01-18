#include "DataStore.h"

// Create films map
std::map<string, json> films { {"2", {"title", "the matrix"}}, {"1", {"title", "pulp fiction"}}, {"3", {"title", "gremlins"}} };
//json j_films(films);

// Print films map
void print() {
    std::cout << "----------------------------\n";
    for (auto it = films.begin(); it != films.end(); ++it) {
        std::cout << it->first << " : " << it->second << "\n";
    }
}

void insert(string key, json value ) {
    films.insert(make_pair(key, value));
}

void del(string key) {
    films.erase(key);
}

void update(string key, json value) {
    films[key] = value;
}

json search(string key) {
    return films[key];
}
