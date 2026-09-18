#include<stdio.h>


int main()
{
    int a=10;
    int b=20;

    printf("Before Swap = A : %d, B: %d \n", a,b);

     int *p1= &a;
    int *p2= &b;

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2; 
    *p1 = *p1 - *p2;

    printf("After Swap = A : %d, B: %d", a,b);
   
}