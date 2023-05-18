#include<iostream>
using namespace std;
//Dynamic function binding/polymorphism with pure virtual func.
class Base//abstract class , can not create any object 
{
public:
virtual void show()=0; //it is a pure virtual function
};
class Drv1:public Base
{
public:
void show()
{
cout<<"Drv1"<<endl;
}
};
class Drv2:public Base
{
public:
void show()
{
cout<<"Drv2"<<endl;
}
};
class Drv3:public Base
{
public:
void show()
{
cout<<"Drv3"<<endl;
}
};

int main()
{
Base *p;
//Base b;
Drv1 d1;
Drv2 d2;
Drv3 d3;

p = &d1;
p->show();

p = &d2;
p->show();

p = &d3;
p->show();
}


