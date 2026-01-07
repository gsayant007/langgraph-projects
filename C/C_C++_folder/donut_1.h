#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef donut_1
#define donut_1

void ch_tree(int num_row)
{   
    for(int i=0;i<num_row;i++)
    {
        if(i%2==1)
        {
            int space_multiplier = (num_row-i)/2;
            for(int j=0;j<space_multiplier;j++)printf(" ");
            for(int j=0;j<i;j++)printf("*");
        }
        printf("\n");
    }
}
#endif