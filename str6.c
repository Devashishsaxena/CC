#include<stdio.h>
#include<string.h>
void main()  //compare
{
char str1[20],str2[20];
int diff;
printf("Enter first string:");
gets(str1);
printf("Enter second string:");
gets(str2);
diff = strcmp(str1,str2);
if(diff==0)
{
printf("both strings are equal\n");
}
else
{
printf("both strings are not equal\n");
}
printf("Diff = %d\n",diff);
}
