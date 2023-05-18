#include<stdio.h>
union X
{
char a;
int b;
float c;
};
void main()
{
union X x;
x.a='A';
printf("Char = %c\n",x.a);
x.b=1000;
printf("Int = %d\n",x.b);
x.c=123.456;
printf("Float = %f\n",x.c);
}
