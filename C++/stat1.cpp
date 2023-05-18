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
void show()
{
cout<<"Id = "<<id<<endl;
cout<<"Count = "<<count<<endl;
}
};
int Stat::count;
int main()
{
Stat s1;
s1.show();

Stat s2;
Stat s3;
Stat s4;

s2.show();
s3.show();
s4.show();
}
