#include <stdio.h>
#include <stdlib.h>

#ifndef projectile_2
#define projectile_2

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
    size_t count;
    size_t capacity;
} trajectory;

void updateBall(Ball *p,float dt, float g){
    p->position.x += p->velocity.x * dt;
    p->position.y += p->velocity.y * dt;
    p->velocity.y -= g * dt;
}

void trajectory_Init(trajectory *xs, size_t initial_capacity)
{
    xs->data = malloc(initial_capacity * sizeof(Vector2));
    if(xs->data==NULL)exit(1);
    xs->capacity = initial_capacity;
    xs->count = 0;
}

void trajectory_Push(trajectory *xs, Vector2 value)
{
    if(xs->capacity==0)xs->capacity = 10;
    else if(xs->count >= xs->capacity)
    {
        xs->capacity = 2 * xs->capacity;
        xs->data = realloc(xs->data, xs->capacity * sizeof(Vector2));
    }
    xs->data[xs->count++] = value;
}

void trajectory_Free(trajectory *xs)
{   
    free(xs->data);
    xs->data = NULL;
    xs->capacity = 0;
    xs->count = 0;
}


#endif