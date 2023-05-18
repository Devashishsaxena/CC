#include<stdio.h>
//no return no parameter 
void add();  //Declaration
void add()   //Definition
{
int a,b,c;
printf("Enter two values:");
scanf("%d%d",&a,&b);
c = a+b;
printf("Sum = %d\n",c);
}
void sub();  //Declaration
void sub()   //Definition
{
int a,b,c;
printf("Enter two values:");
scanf("%d%d",&a,&b);
c = a-b;
printf("Diff = %d\n",c);
}
void multi();  //Declaration
void multi()   //Definition
{
int a,b,c;
printf("Enter two values:");
scanf("%d%d",&a,&b);
c = a*b;
printf("Product = %d\n",c);
}
void div();  //Declaration
void div()   //Definition
{
int a,b,c;
printf("Enter two values:");
scanf("%d%d",&a,&b);
c = a/b;
printf("Quptient = %d\n",c);
}
void main()
{
add();
add();
div();
multi();
}
