#include<stdio.h>
//scope of autometic
void display();
void display()
{
auto int b=10;
printf("\nA = %d\n",a);   //Error
printf("\nB = %d\n",b);
}
void main()
{
int a=20;
printf("\nA = %d\n",a);
printf("\nB = %d\n",b);   //Error
display();
}

