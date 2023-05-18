#include<stdio.h>
void display();
void display()  //life of auto
{
auto int i=0;
i++;
printf("\ni = %d\n",i);
}
void main()
{
display();
display();
display();
}
