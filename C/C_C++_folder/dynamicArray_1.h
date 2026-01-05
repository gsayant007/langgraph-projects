#include <stdio.h>
#include <stdlib.h>

#ifndef dynamicArray_1
#define dynamicArray_1

typedef struct 
{
    int *data;
    size_t count;
    size_t capacity;
} grades;

void grades_init(grades *g, int initial_capacity)
{
    g->data = malloc(initial_capacity * sizeof(int));
    if(g->data==NULL) printf("Assignment did not work!\n");
    g->count = 0;
    g->capacity = initial_capacity;
}

void grades_append(grades *g,int value)
{   
    if(g->capacity==0)g->capacity = 10;
    else
    {
        g->capacity = 2 * g->capacity;
        g->data = realloc(g->data, g->capacity * sizeof(int));
    }
    g->data[g->count++] = value;
    printf("New capacity is %zu\n",g->capacity);
    
}

void grades_free(grades *g)
{
    free(g->data);
    g->data = NULL;
    g->capacity = 0;
    g->count = 0;
}

#endif

