#include<stdio.h>
void main()
{
char str1[20],str2[20];
int i,l1=0,l2=0;
int flag=1;
printf("Enter first string:");
gets(str1);
printf("Enter second string:");
gets(str2);
for(i=0; str1[i]!='\0'; i++)
{
l1++;
}
for(i=0; str2[i]!='\0'; i++)
{
l2++;
}
if(l1==l2)
{
	for(i=0; str1[i]!='\0'; i++)
	{
		if(str1[i]!=str2[i])
		{
		flag=0;
		}
	}
}
else
{
flag=0;
}
if(flag==1)
{
printf("Both strings are equal\n");
}
else
{
printf("Both strings are not equal\n");
}
}
