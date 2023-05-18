#include<iostream>
using namespace std;
int main()
{
int a=10;
int &b = a;  //b is alice name(duplicat) of a.
printf("a = %d\n",a);
printf("b = %d\n",b);

b = 20;

printf("a = %d\n",a);
printf("b = %d\n",b);

}

