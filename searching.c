#include<stdio.h>
void main()
{
int a[10];
int i,n,found=0;
printf("Enter 10 values:");
for(i=0; i<=9; i++)
{
scanf("%d",&a[i]);
}
printf("Enter search element:");
scanf("%d",&n);

printf("Output:\n");
for(i=0; i<=9; i++)
{
	if(n==a[i])
	{
	found++;
	}
}
if(found>0)
{
printf("\nFound\n");
}
else
{	`
printf("\nNot Found\n");
}
}
