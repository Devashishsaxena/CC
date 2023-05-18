#include<iostream>
#include<fstream>
//reading one by one characters from the file.
using namespace std;

int main()
{
char ch;
ifstream in("file2.cpp");
while(!in.eof())  //End Of File
{
in.get(ch);
cout<<ch;
}
}
