#include <stdio.h>
#include <stdlib.h>

#ifndef hash_map
#define hash_map

typedef struct 
{
    char* key;
    int value;
    int used;
}Entry;

typedef struct 
{
    Entry *entries;
    int capacity;
    int count;
} HashMap;

void hash_init(HashMap* map, int initial_capacity)
{
    map->capacity = initial_capacity;
    map->count = 0;
    map->entries = malloc(initial_capacity * sizeof(Entry));

}

void hash_push(){}

void hash_free(HashMap *map)
{
    free(map->entries);
    map->entries = NULL;
    map->count = 0;
    map->capacity = 0;
}


#endif