#include<stdio.h>
//no return with parameter 
void add(int,int);  //Declaration
void main()
{
int a,b;
printf("Enter two values:");
scanf("%d%d",&a,&b);
add(a,b);
}
void add(int x,int y)   //Definition
{
int z;
z = x+y;
printf("Sum = %d\n",z);
}


