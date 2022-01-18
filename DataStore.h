#ifndef DATASTORE_H
#define DATASTORE_H
using namespace std;
#include <iostream>
#include <map>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

extern void print();
extern void add(string, json);

#endif