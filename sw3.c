#include<stdio.h>
int add(int,int);
int sub(int,int);
int multi(int,int);
int div(int,int);

int add(int x,int y)
{
int z;
z = x+y;
return z; 
}
int sub(int x,int y)
{
int z;
z = x-y;
return z; 
}
int multi(int x,int y)
{
int z;
z = x*y;
return z; 
}
int div(int x,int y)
{
int z;
z = x/y;
return z; 
}
void main()
{
int a,b,c,choice;
int n=1;
while(n==1)
{
printf("What Do U Want:");
printf("Add : 1\n");
printf("Sub : 2\n");
printf("Mul : 3\n");
printf("Div : 4\n");
printf("Enter your choice:");
scanf("%d",&choice);
printf("Enter two values:");
scanf("%d%d",&a,&b);
switch(choice)
{
	case 1:
		c = add(a,b);
		printf("Sum = %d\n",c);
		break;
	case 2:
		c = sub(a,b);
		printf("Diff = %d\n",c);
		break;
	case 3:
		c = multi(a,b);
		printf("Product = %d\n",c);
		break;
	case 4:
		c = div(a,b);
		printf("Quotient = %d\n",c);
		break;
	default:
		printf("W R O N G  C H O I C E\n");
		
}
printf("Do U Want To Continue[y=1/n=0]:");
scanf("%d",&n);
}
}

