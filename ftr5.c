#include<stdio.h>
//with return with parameter 
float square(float);  //Declaration
void main()
{
float a;
a = square(1)+square(2)+square(3)+square(4)+square(5);
printf("Result = %f\n",a);
}
float square(float x)   //Definition
{
float s;
s = x*x;
return s;
}


