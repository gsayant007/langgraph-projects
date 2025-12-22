#include <stdio.h>
#include <math.h>

// typedef struct Ball{
// float x,y; // distance traveled in the x,y direction
// float vx,vy; // velocity in the x,y direction
// };

// void projectileMotion(Ball *p,float dt,float g){
// // dx = vx * dt
// // dy = vy * dt
// // dvx = 0
// // dvy = -gdt
// p->x += p->vx * dt;
// p->y += p->vy * dt;
// p->vy = p->vy - g*dt;
// }
typedef struct Vector2{
    float x,y;
};
#define MAX_STEPS 1000
Vector2 trajectory[MAX_STEPS];

typedef struct Ball{
    Vector2 position;
    Vector2 velocity;
};
void updateBall(struct Ball *p,float dt, float g){
    p->position.x += p->velocity.x * dt;
    p->velocity.y += p->velocity.y * dt;
    p->velocity.y = p->velocity.y - g*dt;
}
// define a trajectory array of (x,y)

int main(){
    
    float dt = 0.1f;
    float g = 9.8f;
    Vector2 position = {0.0f,0.0f};
    Vector2 velocity = {10.0f,20.0f};
    printf("x = %f y = %f\n",position.x,position.y);
    printf("vx = %f vy = %f\n",velocity.x,velocity.y);
    Ball ball = 
//     Ball ball = {
// .x = 0.0f,
// .y = 0.0f,
// .vx = 10.0f,
// .vy = 20.0f
// };
// for(int t=0;t<=50;t++){
//             printf("t=%d,x=%f,y=%f \n",t,ball.x,ball.y);
//             trajectory[t].x = ball.x;
//             trajectory[t].y = ball.y;
//             projectileMotion(&ball,dt,g);
//             if (ball.y<0) // ball hits the ground
//             {
//                 break;
//             }
//             }
// printf("length of trajectory %d\n",sizeof(trajectory)/sizeof(trajectory[0])
// );

               return 0;
}