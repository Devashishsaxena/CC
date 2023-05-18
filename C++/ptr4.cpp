#include<iostream>
using namespace std;
//pass by reference function
void swap(int &,int &);
void swap(int &x,int &y)
{
int z;
z = x;
x = y;
y = z; 
}
int main()
{
int a=10;
int b=20;
cout<<"Before swaping a = "<<a<<" , "<<"b = "<<b<<endl;
swap(a,b);
cout<<"After swaping a = "<<a<<" , "<<"b = "<<b<<endl;
}
