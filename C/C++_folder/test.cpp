#include <stdio.h>
void swap_int_1(int a , int b){
    // without pointers swapping will not work
    // the actual values of a and b remains the same
    int temp = a;
    a = b;
    b = temp;
}
void swap_int_2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    printf("hello world!\n");
    int a = 3;
    int b = 4;
    swap_int_1(a,b);
    printf("Before using pointers, a,b %d %d\n",a,b);

    swap_int_2(&a,&b);
    printf("After using pointers, a,b %d %d\n",a,b);
    return 0;
}