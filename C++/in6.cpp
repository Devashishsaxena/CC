#include<iostream>
using namespace std;
//Multiple with function overriding and anmbiguity
class A
{
public:
void show()
{
cout<<"Inside A"<<endl;
}
};
class B
{
public:
void show()
{
cout<<"Inside B"<<endl;
}
};
class C:public A,public B
{
public:
};
int main()
{
C c;

c.A::show();
c.B::show();
//c.show();
return 0;
}
