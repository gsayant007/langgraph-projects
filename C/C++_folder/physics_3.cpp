// write a function that moves a point by dx, dy
#include <stdio.h>
#include <math.h>


typedef struct Point{
    float x,y;
};
void translatePoint(Point *p,float dx, float dy){
    // that means x goes to x + dx and y goes to y+dy
    p->x += dx; // move the position from x to dx
    p->y += dy;
};

int main(){
    Point p1 = {2,3};
    printf("Unchanged Old %f %f \n",p1.x,p1.y);
    for(int i=1;i<=10;i++){
        translatePoint(&p1,1,1);
        printf("Position at t=%d, is %f %f \n",i,p1.x,p1.y);
    }
    printf("Changed New %f %f \n",p1.x,p1.y);
    return 0;
}
