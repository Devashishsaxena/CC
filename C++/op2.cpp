#include<iostream>

using namespace std;
class Dist
{
int feet;
float inch;
public:
Dist()
{
feet = 0;
inch = 0;
}
Dist(int x,float y)
{
feet = x;
inch = y;
}
void show()
{
cout<<"Feet = "<<feet<<endl;
cout<<"Inch = "<<inch<<endl;
}
void operator /(Dist d)
{
float ft1,ft2;
ft1 = feet+(inch/12);//6.5
ft2 = d.feet+(d.inch/12);  //2.25
float ft = ft1/ft2;
cout<<"Final Result = "<<ft<<endl;
}
};
int main()
{
Dist d1(6,6.0);
Dist d2(2,3.0);
d1.show();
d2.show();	

d1/d2;   //d1./(d2);
}

