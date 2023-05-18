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
friend void operator ++(alpha a);
};

void operator ++(alpha a)
{
a.data++;
cout<<"Data = "<<a.data<<endl;
}

int main()
{
alpha a1(10);
a1.show();
//cout<<a1.data;
++a1;  //++(a1)
}
