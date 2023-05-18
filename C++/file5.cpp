#include<iostream>
#include<fstream>
using namespace std;
//writing one by one object to the file.
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
ofstream out("stud.doc");
Student s1;
int n=1;
while(n==1)
{
s1.get();
out.write((char *)&s1,sizeof(s1));  //Serialization
cout<<"Continue[y=1/n=0]:";
cin>>n;
}
}
