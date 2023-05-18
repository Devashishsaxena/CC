#include<iostream>
using namespace std;
class Dist
{
int feet;
float inch;
public:
void getdata()
{
cout<<"Enter feet & inch:";
cin>>feet>>inch;
}
void showdata()
{
cout<<"Feet = "<<feet<<endl;
cout<<"Inch = "<<inch<<endl;
}
void feettodist(float ft)
{
feet = (int)ft;  //2
inch = (ft-feet)*12;  //3.0
}
float disttofeet()
{
float ft;
ft = feet+(inch/12);//2.5
return ft;
}
};

int main()
{
Dist d1;
d1.feettodist(2.25);
d1.showdata();
Dist d2;
d2.getdata();
float x = d2.disttofeet();
cout<<"Feets = "<<x<<endl;
}
/*
Money Class
r,p
getdata()
showdata()
rtomoney()
moneytor()
*/

