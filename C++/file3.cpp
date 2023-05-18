#include<iostream>
#include<fstream>
using namespace std;
//writing one by one lines to the file.
int main()
{
char str[80];
ofstream out("yashika.txt");
int n=1;
while(n==1)
{
cout<<"Enter a line:"<<endl;
cin.getline(str,79);
cin.getline(str,79);
out<<str<<endl;
cout<<"Continue[y=1/n=0]:";
cin>>n;
}
}
