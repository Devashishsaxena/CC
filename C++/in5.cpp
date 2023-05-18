#include<iostream>
using namespace std;
//Multiple with function overriding
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
void show()
{
cout<<"Pakistan"<<endl;
}
};
class C:public A,public B
{
public:
void show()
{
cout<<"Hindustan"<<endl;
}
};
int main()
{
C c;

c.A::show();
c.B::show();
c.show();
return 0;
}
