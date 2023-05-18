#include<stdio.h>

void main()
{
int i,j;

i=1; 
do
{
	j=1; 
	do
	{
	printf(" ");
	j++;
	}while(j<=i);
	
	j=i;
	do
	{
	printf("* ");
	j++;
	}while(j<=5);
	

i++;
printf("\n");	
}while(i<=5);
}
