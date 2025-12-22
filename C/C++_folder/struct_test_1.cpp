#include <stdio.h>
#include <math.h>

struct Person{
    // define the person class
    int age;
    float height;
};

void printPerson(int age, float height){
    printf("Person: age, age %d,%f \n",age, height);
}

void printPerson_2(struct Person p){
    printf("%d %f\n",p.age,p.height);
}

void grow(struct Person *p){
    // if we want to increase the person's height there's no way we can do this without pointer because the actual value will not change
}
struct Point
{
    float x; // x coordinate
        float y; // y coordinate
        };
        void lengthBetweenPoints(struct Point p1,struct Point p2){
            // here we only need to read the data and not to modify the data so pointer use is not
                // applicable here
                    float dist = pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2);
                        printf("Distance between points are:%f\n",dist);
                        }


int main(){
    struct Person p1 = {23,179.0};
    struct Person p2 = {24,159.0};
    // printPerson(p1.age,p1.height);
    // printPerson(p2.age,p2.height);
    printPerson_2(p1);
    printPerson_2(p2);

    struct Point point_1 = {2.5,3.5};
    struct Point point_2 = {4.5,6.5};
    lengthBetweenPoints(point_1,point_2);
    return 0;
}