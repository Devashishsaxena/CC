#include<iostream>
#include<fstream>
//writing one by one characters to the file.
using namespace std;

int main()
{
char str[]="this is a string\nthat will write in a file \none by one characters.";
ofstream out("deshna.txt");
int i=0;
while(str[i]!=NULL)
{
out.put(str[i]);
i++;
}
}
