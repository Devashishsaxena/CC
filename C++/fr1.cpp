#include<iostream>
using namespace std;

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
friend void square(alpha a);
};

void square(alpha a)
{
int s;
s = a.data*a.data;
cout<<"Square = "<<s<<endl;
}

int main()
{
alpha a1(10);
a1.show();
//cout<<a1.data;
square(a1);
}

