#include <iostream>
#include <list>
#include <cstring>
using namespace std;


// Hash table to implment phone book
// ie key:value 905:Jim


class HashTable{
    private:
        static const int hashGroups = 10;
        list<pair<int, string>> table[hashGroups];

};