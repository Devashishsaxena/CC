#include<iostream>
using namespace std;
class beta;
class alpha
{
private:
int data;
public:
alpha(int x)
{
data = x;
}
void show()  //Member function
{
cout<<"Data = "<<data<<endl;
}
friend void operator *(alpha a,beta b);
};
class beta
{
private:
int data;
public:
beta(int x)
{
data = x;
}
void show()  //Member function
{
cout<<"Data = "<<data<<endl;
}
friend void operator *(alpha a,beta b);
};

void operator *(alpha a,beta b)
{
int s;
s = a.data*b.data;
cout<<"Product = "<<s<<endl;
}
int main()
{
alpha a1(10);
a1.show();
beta b1(20);
b1.show();
//cout<<a1.data;
a1*b1;//*(a1,b1)
}
