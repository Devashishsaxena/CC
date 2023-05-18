#include<stdio.h>
//passing complete array in function
void display(int );
void display(int x)
{
printf("%d ",x);
}
}
void main()
{
int a[5]={2,4,6,8,10};
int i;
for(i=0; i<=4; i++)
{
display(a[i]);
}
}
