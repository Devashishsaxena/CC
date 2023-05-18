#include<stdio.h>

void add(int*,int *,int *);
void add(int *x,int *y,int *z)
{
*z = *x + *y;
}
void main()
{
int a=10;
int b=20;
int c;
add(&a,&b,&c);
printf("Sum = %d\n",c);
printf("Address Of C = %u\n",&c);
}
