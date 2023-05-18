#include<stdio.h>
//with return with parameter 
float square(float);  //Declaration
void main()
{
float a,r;
printf("Enter a value:");
scanf("%f",&r);
a = 3.14*square(r);
printf("Area = %f\n",a);
}
float square(float x)   //Definition
{
float s;
s = x*x;
return s;
}


