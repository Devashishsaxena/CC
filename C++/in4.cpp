#include<iostream>
using namespace std;
//Single level
class A
{
public:
void show()
{
cout<<"Inside A"<<endl;
}
};
class B:public A
{
public:
void show()  //Function Overriding
{
cout<<"Inside B"<<endl;
}
};
int main()
{
B b;

b.A::show(); //:: scope resolution op
b.show();
return 0;
}
