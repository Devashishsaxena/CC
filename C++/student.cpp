#include<iostream>
using namespace std;

class Student
{
private:
int roll;   //Data members of class
char name[20];
float pmarks;
float cmarks;
float mmarks;
public:
void getdata()   //Member functions of class
{
cout<<"Enter rollno,name,pmarks,cmarks,mmarks:";
cin>>roll>>name>>pmarks>>cmarks>>mmarks;
}
void showdata()
{
cout<<"Rollno = "<<roll<<endl;
cout<<"Name = "<<name	<<endl;
cout<<"PMarks = "<<pmarks<<endl;
cout<<"CMarks = "<<cmarks<<endl;
cout<<"MMarks = "<<mmarks<<endl;
}
void total()
{
float t;
t = pmarks+cmarks+mmarks;
cout<<"Totam Marks : "<<t<<endl;
}
void per()
{
float p;
p = (pmarks+cmarks+mmarks)/3;
cout<<"Percentage : "<<p<<endl;
}
};
int main()
{
Student a1;
a1.getdata();
a1.showdata();
a1.total();
a1.per();
return 0;
}
/*
Student class
roll
name
pmarks
cmarks
mmarks
getdata()
showdata()
total()
per()

Box class
l,b,h
getdata()
showdata()
volume()

Time class
h,m,s
getdata()
showdata()
htom()
mtoh()

Employee class
empno
ename
salary
exp
getdata()
showdata()
increment()
exp<5 increse sal by 5%
exp<10 increse sal by 10%
exp>=10 increse sal by 15%

*/
