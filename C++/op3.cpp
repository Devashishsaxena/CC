#include<iostream>
using namespace std;
class Time
{
int h,m;
float s;
public:
Time()
{
h = 0;
m = 0;
s = 0;
}
Time(int x,int y,float z)
{
h = x;
m = y;
s = z;
}
int operator !=(Time t)
{
float ht1,ht2;
ht1 = h+(m/60.0)+(s/3600.0);
ht2 = t.h+(t.m/60.0)+(t.s/3600.0);
return (ht1!=ht2 ? 1 : 0);
}
};
int main()
{
Time t1(3,40,20);
Time t2(3,40,20);
(t1!=t2 ?cout<<"t1 is != t2":cout<<"t1 is == t2" );
// t1.!=(t2);
return 0;
}
