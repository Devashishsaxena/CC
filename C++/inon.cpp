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
void show()  //Inline Member function
{
cout<<"Data = "<<data<<endl;
}
void square();
};

void alpha::square()//Online Member function 
{
int s;
s = data*data;
cout<<"Square = "<<s<<endl;
}

int main()
{
alpha a1(10);
a1.show();
a1.square();
}
