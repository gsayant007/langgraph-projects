#include <stdio.h>
#include <stdlib.h>

#ifndef dynamicArray_3
#define dynamicArray_3

typedef struct {
    int* data;
    size_t size;
    size_t capacity;
} dArray;

void da_append_3(dArray* arr,int value){
    // printf("hello from da_append_3\n");
    if(arr->size==0)arr->capacity = 10;
    else arr->capacity = 2 * arr->capacity;
    int* temp = realloc(arr->data, arr->capacity * sizeof(int));
    if(temp == NULL)return 1;//check for whether realloc didn't work
    else arr->data = temp;
    arr->data[arr->size++] = value * 10;
}

#endif