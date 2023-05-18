#include<iostream>
#include<fstream>
using namespace std;
//reading one by one lines from the file.
int main()
{
char str[80];
ifstream in("file4.cpp");
while(!in.eof())
{
in.getline(str,79);
cout<<str<<endl;
}
}
