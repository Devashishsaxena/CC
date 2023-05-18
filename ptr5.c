#include<stdio.h>
//passing complete array in function
void display(int []);
void display(int x[])
{
int i;
for(i=0; i<=4; i++)
{
printf("%d ",x[i]);
}
}
void main()
{
int a[5]={2,4,6,8,10};
display(a);
}

