#include<stdio.h>
#include<string.h>
void main()  //Upper
{
char str1[20];
printf("Enter first string:");
gets(str1);
strupr(str1);
printf("Upper = %s\n",str1);
}
