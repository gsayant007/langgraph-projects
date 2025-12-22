#include <stdio.h>
#include <math.h>

typedef struct Point
{
float x; // x coordinate
float y; // y coordinate
};

void lengthBetweenPoints(Point p1,Point p2){
    // here we only need to read the data and not to modify the data so pointer use is not applicable here
    float dx = (p1.x-p2.x);
    float dy = (p1.y-p2.y);
    float dist = sqrt(dx*dx + dy*dy);
        printf("Distance between points are:%f\n",dist);
        }

void lengthBetweenPoints_2(const Point *p1,const Point *p2){
    // we will now use pointers do the same length between points without actually changing the original points
    float dx = (p1->x - p2->x);
    float dy = (p1->y - p2->y);
    float dist = sqrt(dx*dx + dy*dy);
    printf("Pointer version of distance %f\n",dist);
}

int main(){
    // struct Point point_1 = {2.5,3.5};
    // struct Point point_2 = {4.5,6.5};
    Point point_1 = {2.5,3.5};
   Point point_2 = {4.5,6.5};
    // lengthBetweenPoints(point_1,point_2);
    lengthBetweenPoints_2(&point_1,&point_2);
    return 0;
}