#include<stdio.h>
#include<string.h>
void main()  //copy
{
char str1[20],str2[20];
int diff;
printf("Enter first string:");
gets(str1);
strcpy(str2,str1);
printf("Copyed string = %s\n",str2);
puts(str2);
}
