#include<stdio.h>
#include<string.h>
void main()  //length
{
char str1[20];
int diff;
printf("Enter first string:");
gets(str1);
diff= strlen(str1);
printf("Length = %d\n",diff);
}
