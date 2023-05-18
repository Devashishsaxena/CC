#include<iostream>
using namespace std;
//Multiple
class A
{
public:
void show()
{
cout<<"India"<<endl;
}
};
class B
{
public:
void show1()
{
cout<<"Pakistan"<<endl;
}
};
class C:public A,public B
{
public:
void show2()
{
cout<<"Hindustan"<<endl;
}
};
int main()
{
A a;
B b;
C c;

a.show();
b.show1();
c.show();
c.show1();
c.show2();
return 0;
}
