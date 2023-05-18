#include<stdio.h>
void main()
{
int f=1,n,i;
printf("Enter a value:");
scanf("%d",&n);
i=1;  //start
while(i<=n)  //stop
{
f = f*i;	//statement
i++;		//step
}
/*for(i=1; i<=n; i++)
{
f = f*i;
}*/
printf("Fact = %d\n",f);
}
