#include<iostream>
using namespace std;
//Dynamic function binding
class Base
{
public:
virtual void show() //it is not a pure virtual function
{
cout<<"Base"<<endl;
}
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


