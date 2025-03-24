#include<iostream>
#include<vector>

using namespace std;

class MyHashSet {
private:
    static const int SIZE = 1000; // Bucket size
    std::vector<std::list<int>>table; // Hash table with chaining
    
    int hash(int key) {
        return key % SIZE; // Hash function
    }

public:
    MyHashSet() : table(SIZE) {}
    
    void add(int key) {
        int index = hash(key);
        for (int val : table[index]) {
            if (val == key) return; // Key already exists
        }
        table[index].push_back(key);
    }
    
    void remove(int key) {
        int index = hash(key);
        table[index].remove(key);
    }
    
    bool contains(int key) {
        int index = hash(key);
        for (int val : table[index]) {
            if (val == key) return true;
        }
        return false;
    }
};