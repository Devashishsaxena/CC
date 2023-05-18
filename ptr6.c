#include<stdio.h>
//passing complete array in function by using pointer
void display(int *);
void display(int *x)
{
int i;
for(i=0; i<=4; i++)
{
printf("%d ",*x);
x++;
}
}
/*
x = 100+1
x = 102+1
x = 104+1
x = 106+1
x = 108
*/
void main()
{
int a[5]={2,4,6,8,10};
display(&a[0]);
}

