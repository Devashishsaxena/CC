#include<stdio.h> //life and scope of extern 
int x=10;
void display();
void display()
{
printf("\nx = %d\n",x);
x = 40;
}
void main()
{
printf("\nx = %d\n",x);
x = 30;
display();
printf("\nx = %d\n",x);
}

