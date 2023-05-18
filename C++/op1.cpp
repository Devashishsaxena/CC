#include<iostream>
using namespace std;
class Counter
{
int count;
public:
Counter()//No Parameter Const
{
count=0;
}
Counter(int x)//One Parameter const
{
count = x;
}
void show()
{
cout<<"Count = "<<count<<endl;
}
void operator --()
{
count++;
}
void operator ++()
{
count--;
}
};

int main()
{
Counter c1;
Counter c2(10);
c1.show();
c2.show();

--c1;  //c1.--()
++c2;  //c2.++()
c1.show();
c2.show();
}
