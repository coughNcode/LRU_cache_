//
// Created by Mannat Saini on 11/10/26.

#ifndef LRU_CACHE_LRUCACHE_H
#define LRU_CACHE_LRUCACHE_H

// LRUCache(int capacity): Initialize LRU cache with positive size capacity.
// int get(int key): Return the value of key if key exists, otherwise, return -1.
// void put(int key, int value): Update the value of key if key exists. Otherwise, add key-value pair to the cache.
// If number of keys exceeds the capacity of lru cache, evict the least recently used key.

// a cache is a hidden or temporary store of items or data designed for fast and easy retrieval

class LRUCache {
private:
    int capacity;

    public:
    // overloading call if no capacity is passed we will set capacity to 3 by default
    LRUCache() {
        this->capacity = 3;
    }
    // constructor call
    LRUCache(int capacity) {
        this -> capacity = capacity;
    }

    // getter
    int getCapacity() {
        return capacity;
    }
    // setter
    int setCapacity(int capacity) {
        this -> capacity = capacity;
    }

};


#endif //LRU_CACHE_LRUCACHE_H
