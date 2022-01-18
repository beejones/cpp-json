#include <iostream>
#include "DataStore.h"

int main(int argc, char *argv[])
{
    std::cout << "Start experiment\n";
    insert("4", {"title", "back to the future"});
    print();
    del("2");
    print();
    update("4", {"title", "Back to the future"});
    print();
    cout << "Key 1: " << search("1") << "\n";

    // Error cases currently not trapped
    del("20");
    update("20", {"title", "Back to the future"});
    print();
}