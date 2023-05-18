#include<iostream>
using namespace std;

class Employee
{
private:
int empno;   //Data members of class
char name[20];
float sal;
int exp;
public:
void get()   //Member functions of class
{
cout<<"Enter empno,name,salary  & exp:";
cin>>empno>>name>>sal>>exp;
}
void show()
{
cout<<"Empno = "<<empno<<endl;
cout<<"Name = "<<name<<endl;
cout<<"Salary = "<<sal<<endl;
cout<<"Exp. = "<<exp<<endl;
}
void salinc()
{
if(exp<5)
{
sal = sal+(sal*5/100);
}
else
{
	if(exp<10)
	{
	sal = sal+(sal*10/100);
	}
	else
	{
	sal = sal+(sal*15/100);
	}
}
}
};
int main()
{
Employee e1;
e1.get();
e1.salinc();
e1.show();
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

*/
