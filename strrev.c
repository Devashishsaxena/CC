#include<stdio.h>
void main()
{//array name contain starting address.
char str[40];
int i;
printf("Enter your full name:");
gets(str);
for(i=0; str[i]!=NULL; i++)
{

}
for(i = i-1; i>=0;i--)
{
printf("%c\n",str[i]);
}
}
