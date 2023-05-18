#include<stdio.h>
//with return with parameter 
float square(float);  //Declaration
void main()
{
float a,r;
printf("Enter a value:");
scanf("%f",&r);
a = square(r);
printf("Square = %f\n",a);
}
float square(float x)   //Definition
{
float s;
s = x*x;
return s;
}


