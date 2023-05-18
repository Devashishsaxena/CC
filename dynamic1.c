#include<stdio.h>
//#include<alloc.h>
/*
ptr = (typecast)malloc(sizeof(data type));
*/
void main()
{
int *ptr;
int a;
a = sizeof(int);
printf("Size of int = %d\n",a);
ptr =(int *)malloc(sizeof(int));
printf("Enter a value:");
scanf("%d",ptr);
printf("Given value is : %d\n",*ptr);
free(ptr);
}
