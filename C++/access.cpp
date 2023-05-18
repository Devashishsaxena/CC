#include<iostream>
using namespace std;

class Super
{
private:
int a;
protected:
int b;
public:
int c;

Super()
{
a = 0;
b = 0;
c = 0;
}
Super(int x,int y,int z)
{
a = x;
b = y;
c = z;
}
void show()
{
cout<<"Private : "<<a<<endl;
cout<<"Protected : "<<b<<endl;
cout<<"Public : "<<c<<endl;
}
};
class Sub:public Super
{
public:
Sub():Super()
{
}
Sub(int x,int y,int z):Super(x,y,z)
{
}
void show1()
{
//cout<<"Private : "<<a<<endl;  Error
cout<<"Protected : "<<b<<endl;
cout<<"Public : "<<c<<endl;
}
};

int main()
{
Super sup(10,20,30);
sup.show();
Sub sub(40,50,60);
sub.show1();

//cout<<"Private : "<<sup.a<<endl;  Error
//cout<<"Protected : "<<sup.b<<endl;  Error
cout<<"Public : "<<sup.c<<endl;
}
