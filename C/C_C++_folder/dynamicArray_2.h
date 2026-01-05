#include <stdio.h>
#include <stdlib.h>

#ifndef dynamicArray_2
#define dynamicArray_2

typedef struct 
{   
    int* data;
    size_t size;
    size_t capacity;   

} dArray;

void da_append_2(void)
{
    
    dArray xs = {0};
    printf("initial_size=%zu & initial_capacity=%zu\n",xs.size, xs.capacity);
    if(xs.data!=NULL)
    {
        for(size_t j=0;j<xs.size;j++){
            printf("%d\t",xs.data[j]);
    }
    }
    else
    {
        printf("Assert that initially the array is null %d\n",xs.data==NULL);
    }

    if(xs.size >= xs.capacity){
        xs.capacity = 2 * xs.capacity;
        xs.data = realloc(xs.data, xs.capacity * sizeof(int));
        for(int i=0;i<10;i++){
            xs.data[xs.size++] = i * 10;
        }
    }
    printf("one of the elements of xs:%d\n",xs.data[4]);

    for(size_t j=0;j<xs.size;j++)printf("%d\t",xs.data[j]);
     
}

#endif