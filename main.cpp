#include <iostream>
#include "DataStore.h"

int main(int argc, char *argv[])
{
    std::cout << "Start experiment\n";
    print();
    add("4", {"title", "back to the future"});
    print();
}