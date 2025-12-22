//chmod +x run.sh
#include <stdio.h>
#include <string.h>
#include <math.h>
struct Person
{
    int age;
    float height;
};
int func1(int n){
    return n + 1;
}
void makeEven(int n){
    if (n%2!=0){
        n = n+1;
    }
}
void makeEven_2(int *n){
    // Now with pointer
    if (*n%2!=0)
    {
        *n = *n+1;
    }
    
}
void swap_int_1(int a , int b){
    // example:2 (swapping two numbers without pointers)
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    // struct Person p1 = {25,170.6};
    // struct Person p2 = {35,173.9};
    // printf("Person1:%d, %f \n",p1.age,p1.height);
    // printf("Person2:%d, %f \n",p2.age,p2.height);
    int a = 5;
    // printf("%d\n",func1(a));
    makeEven(a); // applies on a but can't change the value of a
    printf("Before using pointer %d\n",a); // still 5 because n is only copy for both the function
    makeEven_2(&a); // applies on a and change the value of a
    printf("After using pointer %d\n",a);

    int x = 7;
    int *y = &x; // storing the memory address of x in y
    int z = *y; //what we will get?
    printf("x: %d\n",x);
    printf("y: %d\n",y);
    printf("z: %d\n",z); //indirect referencing to the variable x
    // Instead of copying the value we passed the address
    // the function now modifies the original variable
    // this is the first real use of pointers (a function can change variable decalred somewhere else)
    a = 3;
    int b = 4;
    swap_int_1(a,b);
    printf("a,b %d %d",a,b);

    return 0;
}