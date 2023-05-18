#include<iostream>
using namespace std;

class Account
{
private:
int accno;   //Data members of class
char name[20];
float bal;
public:
void open()   //Member functions of class
{
cout<<"Enter accno,name & balance:";
cin>>accno>>name>>bal;
}
void enq()
{
cout<<"Accno = "<<accno<<endl;
cout<<"Name = "<<name<<endl;
cout<<"Blance = "<<bal<<endl;
}
void deposit()
{
float amt;
cout<<"Enter amount to be deposit:";
cin>>amt;
bal = bal+amt;
cout<<"Current balance : "<<bal<<endl;
}
void withdraw()
{
float amt;
cout<<"Enter amount to be withdraw:";
cin>>amt;
bal = bal-amt;
cout<<"Remaining balance : "<<bal<<endl;
}
};
int main()
{
Account a1;
a1.open();
//cout<<a1.accno;
Account a2;
a2.open();
a1.enq();
a2.enq();

a1.deposit();
a2.withdraw();
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
