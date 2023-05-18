#include<iostream>
using namespace std;
//Single level
class A
{
public:
void show()
{
cout<<"India"<<endl;
}
};
class B:public A
{
public:
void show1()
{
cout<<"M.P."<<endl;
}
};
int main()
{
A a;
B b;

a.show();
b.show();
b.show1();
return 0;
}
