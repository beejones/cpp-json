#ifndef DATASTORE_H
#define DATASTORE_H
using namespace std;
#include <iostream>
#include <map>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

extern void print();
extern void insert(string, json);
extern void del(string key); 
extern void update(string key, json value);
extern json search(string key);
#endif