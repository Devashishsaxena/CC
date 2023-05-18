#include<stdio.h>
void main()
{
int a[3][3];
int i,j;
printf("Enter 9 values in 3*3 array:");
for(i=0; i<=2; i++)
{
	for(j=0; j<=2; j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("Output:\n");
for(i=0; i<=2; i++)
{
	for(j=0; j<=2; j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");
}
}
