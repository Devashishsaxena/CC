#include<stdio.h>
void main()
{
int a[10];
int i,max;
printf("Enter 10 values:");
for(i=0; i<=9; i++)
{
scanf("%d",&a[i]);
}
max = a[0];

for(i=0; i<=9; i++)
{
	if(max<a[i])
	{
	max = a[i];
	}
}
printf("\nMax = %d\n",max);
}
