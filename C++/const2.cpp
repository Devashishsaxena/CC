#include<iostream>
using namespace std;
class Box
{
float l,b,h;
public:
Box()//No parameter const
{
l = 0;
b = 0;
h = 0;
}
Box(float x,float y,float z)//three parameter cosnt
{
l = x;
b = y;
h = z;
}
void show()
{
cout<<"Length = "<<l<<endl;
cout<<"Breadth = "<<b<<endl;
cout<<"Height = "<<h<<endl;
}
//First line of function is called prototype of function
void volume() 
{
float v;
v = l*b*h;
cout<<"Volume of box : "<<v<<endl;
}
void volume(float len) //Function overloading
{
float v;
l = b = h = len;
v = l*b*h;
cout<<"Volume of cube : "<<v<<endl;
}
};

int main()
{
Box b1;
Box b2(4,5,6);
b1.show();
b2.show();
b2.volume();
b1.volume(5);
}
