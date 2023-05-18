#include<stdio.h>
//call by value function
void swap(int,int);
void swap(int x,int y)
{
int z;
z = x;
x = y;
y = z; 
}
void main()
{
int a=10;
int b=20;
printf("Before swaping a = %d,b = %d\n",a,b);
swap(a,b);
printf("After swaping a = %d,b = %d\n",a,b);
}
