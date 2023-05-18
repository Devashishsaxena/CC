#include<stdio.h>
struct X
{
char a;
int b;
float c;
};
void main()
{
struct X x;
x.a='A';
x.b=1000;
x.c=123.456;
printf("Char = %c\n",x.a);
printf("Int = %d\n",x.b);
printf("Float = %f\n",x.c);
}

