#include<iostream>
using namespace std;

int main(int argc,char ** argv)
{
cout<<"No Of Arguments = "<<argc<<endl;

for(int i=0; i<argc; i++)
{
cout<<"argv["<<i<<"]="<<argv[i]<<endl;
}

}
/*
char **argv
char argv[5][20];
argv[0]
argv[1]
argv[2]
argv[4]
argv[5]

*/
