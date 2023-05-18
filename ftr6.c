#include<stdio.h>
void indore();
void bhopal();
void gwalior();
void main()
{
printf("Inside Main\n");
indore();
printf("Back In Main\n");
}
void indore()
{
printf("Inside Indore\n");
bhopal();
printf("Back From Indore\n");
}
void bhopal()
{
printf("Inside Bhopal\n");
gwalior();
printf("Back From Bhopal\n");
}
void gwalior()
{
printf("Inside Gwalior\n");
printf("Back From Gwalior\n");
}

