#include<stdio.h>
int fact(int);
void main()
{
int f;
f = fact(5);
printf("Fact = %d\n",f);
}
int fact(int x)
{
int f;
if(x==1)
{
return 1;
}
f = x*fact(x-1);
return f;
}
