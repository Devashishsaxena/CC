#include<stdio.h>
void main()
{
int a[10];
int i,sum=0;
printf("Enter 10 values:");
for(i=0; i<=9; i++)
{
scanf("%d",&a[i]);
}
printf("Output:\n");
for(i=0; i<=9; i++)
{
printf("%d ",a[i]);
sum = sum+a[i];
}
printf("\nSum = %d\n",sum);
}

