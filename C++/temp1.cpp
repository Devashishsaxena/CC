#include<iostream>
using namespace std;
//One function can work with all data types , even user defined data types.
template <typename T>
T myMax(T x,T y)
{
return (x>y ? x : y);
}

int main()
{
cout<<"Max Integer = "<<myMax(10,20)<<endl;
cout<<"Max Float = "<<myMax(110.23,20.67)<<endl;
cout<<"Max Char = "<<myMax('A','B')<<endl;
}
