#include<stdio.h>
#include<string.h>
void main()  //concat
{
char str1[20],str2[20];
int i,j;
printf("Enter first string:");
gets(str1);
printf("Enter second string:");
gets(str2);
strcat(str1,str2);
printf("Concated string is = %s\n",str1);
}
