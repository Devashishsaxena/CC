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
void inc()
{
count++;
}
void dec()
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

c1.inc();
c2.dec();

c1.show();
c2.show();

}
