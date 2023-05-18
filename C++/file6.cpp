#include<iostream>
#include<fstream>
using namespace std;
//reading object one by one from a file.
class Student
{
int roll;
char name[20];
float marks;
public:
void get()
{
cout<<"Enter rollno,name & marks:";
cin>>roll>>name>>marks;
}
void show()
{
cout<<"Rollno = "<<roll<<endl;
cout<<"Name = "<<name<<endl;
cout<<"Marks = "<<marks<<endl;
}
};

int main()
{
ifstream in("stud.doc");
Student s1;
in.read((char *)&s1,sizeof(s1));//desirialization
while(!in.eof())
{
s1.show();
in.read((char *)&s1,sizeof(s1));
}
}
