#include<stdio.h>
void main()
{
int a[3][3][3];
int i,j,k;
printf("Enter 27 values in 3*3*3 array:");
for(i=0; i<=2; i++)
{
	for(j=0; j<=2; j++)
	{
		for(k=0; k<=2; k++)
		{
		scanf("%d",&a[i][j][k]);
		}
	}
}
printf("Output:\n");
for(i=0; i<=2; i++)
{
	for(j=0; j<=2; j++)
	{
		for(k=0; k<=2; k++)
		{
		printf("%d ",a[i][j][k]);
		}
		printf("\n");
	}
	printf("\n\n");
}
}
