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

trajectory* initTrajectory(size_t initial_capacity)
{
    trajectory* list;
    list->data = malloc(initial_capacity * sizeof(Vector2));
    if(list->data==NULL)printf("Mem allocation didn't work!\n");
    list->capacity = initial_capacity;
    list->size = 0;
    return list;
}

void appendTrajectory(trajectory *trj, Vector2 value)
{   if(trj->capacity<=0)trj->capacity = 10;
    else if(trj->size>=trj->capacity)
    {
        trj->capacity = 2 * trj->capacity;
        trj->data = realloc(trj->data, trj->capacity * sizeof(Vector2));
    }
        trj->data[trj->size++] = value;
}

void freeTrajectory(trajectory *trj){
    free(trj->data);
    trj->data = NULL;
    trj->capacity = 0;
    trj->size = 0;
}

#endif
