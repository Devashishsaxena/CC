#include<iostream>
using namespace std;
//Hybrid
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
class D:public C
{
public:
void show3()
{
cout<<"Akhand Bharat"<<endl;
}
};
int main()
{
A a;
B b;
C c;
D d;
a.show();
b.show1();
c.show();
c.show1();
c.show2();
d.show();
d.show1();
d.show2();
d.show3();
return 0;
}
