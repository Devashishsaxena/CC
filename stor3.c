#include<stdio.h>
void display();  //scope and life of static
void display()
{
static int i=0;
i++;
printf("\ni = %d\n",i);
}
void main()
{
//printf("\ni = %d\n",i);
display();
display();
display();
}
