#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <iostream>
#include <list>
#include <vector>
#include <string>

class HashTable {
private:
    // Hash Table size
    int tableSize;

    // Array of lists to store chains (for collision resolution using chaining)
    std::vector<std::list<std::pair<int, std::string>>> table;

    // Hash function to get index for a key
    int hashFunction(int key) const;

public:
    // Constructor
    HashTable(int size);

    // Insert a key-value pair
    void insert(int key, const std::string& value);

    // Remove a key-value pair
    void remove(int key);

    // Search for a value by key
    std::string search(int key) const;

    // Display the hash table contents
    void display() const;
};

#endif
