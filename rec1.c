#include<stdio.h>
int sum(int);
void main()
{
int f;
f = sum(10);
printf("Sum = %d\n",f);
}
int sum(int x)
{
int f;
if(x==1)    //1 = 5,2 = 4,3 = 3,4 = 2,5 = 1
{
return 1;
}
f = x+sum(x-1);
return f;
}
