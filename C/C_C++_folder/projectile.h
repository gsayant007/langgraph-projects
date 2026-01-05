#include <stdio.h>
#include <stdlib.h>

#ifndef projectile
#define projectile

typedef struct {
    float x;
    float y;
}Vector2;

typedef struct {
    Vector2 position;
    Vector2 velocity;
}Ball;

typedef struct {
    Vector2 *data;
    size_t size;
    size_t capacity;
} trajectory;

void updateBall(Ball *p,float dt, float g){
    p->position.x += p->velocity.x * dt;
    p->position.y += p->velocity.y * dt;
    p->velocity.y -= g * dt;
}

void  initTrajectory(trajectory *trj, size_t initial_capacity)
{
    trj->data = malloc(initial_capacity * sizeof(Vector2));
    if(trj->data==NULL)printf("Assignment didn't work!\n");
    trj->size = 0;
    trj->capacity = initial_capacity;
}

void appendTrajectory(trajectory *trj, Vector2 value)
{
    // 1. Check if we are out of space
    if (trj->size >= trj->capacity) 
    {
        // Handle initial case or double capacity
        trj->capacity = (trj->capacity == 0) ? 10 : trj->capacity * 2;
        
        Vector2 *temp = realloc(trj->data, trj->capacity * sizeof(Vector2));
        if (temp == NULL) {
            fprintf(stderr, "Memory reallocation failed!\n");
            return;
        }
        trj->data = temp;
    }
    
    // 2. Always insert the data and increment size
    trj->data[trj->size++] = value;
}


void freeTrajectory(trajectory *trj){
    free(trj->data);
    trj->data = NULL;
    trj->capacity = 0;
    trj->size = 0;
}

#endif
