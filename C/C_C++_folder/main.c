#include <stdio.h>
#include <stdlib.h>
#include "dynamicArray_1.h"
// #include "dynamicArray_2.h"
// #include "dynamicArray_3.h"
#include "projectile.h"


int main()
{   
    printf("hello world!\n");
    // // da_append_2();
    // dArray xs = {0};
    // for(int j=0;j<10;j++){
    //     da_append_3(&xs,j);
    // }
    // printf("Some elements of xs is:%d\t",xs.data[5]);
    // for(size_t i=0;i<xs.size;i++)printf("%d\t",xs.data[i]);
    float dt = 0.1;
    float g = 9.8;
    Vector2 position = {0,0};
    Vector2 velocity = {10.0,20.0};
    Ball ball = {position,velocity};
    printf("sizeof_vector2 = %d\n",sizeof(Vector2));
    printf("initial position and velocity in the y-direction %f %f\n",ball.position.y, ball.velocity.y);
    // grades G = {0};
    // grades_init(&G,3);
    // for(int i=0;i<20;i++)
    // {
    //     grades_append(&G,i+10);
    // }
    // for(size_t j=0;j<G.count;j++)
    // {
    //     printf("%d\t",G.data[j]);
    // }
    // grades_free(&G);
    trajectory trail = {0};
    initTrajectory(&trail,5);
    printf("Initial size=%zu, capacity=%zu\n",trail.size, trail.capacity);
    printf("Initial data is:",trail.data);
    for(int t=0;t<50;t++)
    {
    //    printf("x=%f,y=%f\n",ball.position.x,ball.position.y); 
       appendTrajectory(&trail,ball.position);
       updateBall(&ball,dt,g);
        if (ball.position.y<=0)
        {
            break;
        }
        
    }
    for(size_t j=0;j<trail.size;j++)
    {
        printf("Trail x=%f, y=%f\n",ball.position.x, ball.position.y);
    }

    freeTrajectory(&trail);    
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        