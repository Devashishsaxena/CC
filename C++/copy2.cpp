#include<iostream>
using namespace std;
class alpha
{
int data;
public:
alpha()
{
data = 0;
cout<<"No parameter const"<<endl;
}
alpha(int x)
{
data = x;
cout<<"One parameter const"<<endl;
}
alpha(alpha &a)
{
data = a.data;
cout<<"Copy  const"<<endl;
}

void show()
{
cout<<"Data = "<<data<<endl;
}
void operator =(alpha &a)
{
data = a.data;
cout<<"Assignement Op"<<endl;
}
};
int main()
{
alpha a1(10);
a1.show();
alpha a2(a1);
a2.show();//default copy const.(copy initialization)

alpha a3;
a3 = a2;  //copy assignement   a3.=(a2);
a3.show();   
}


