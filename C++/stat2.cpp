#include<iostream>
using namespace std;
class Stat
{
int id;
static int count;
public:
Stat()
{
count++;
id = count;
}
static void show()
{
//cout<<"Id = "<<id<<endl;
cout<<"Count = "<<count<<endl;
}
void showid()
{
cout<<"Id = "<<id<<endl;
}
};
int Stat::count;
int main()
{
Stat s1;
s1.showid();
Stat::show();

Stat s2;
Stat s3;

s2.showid();
s2.show();

s3.showid();
Stat::show();
}
