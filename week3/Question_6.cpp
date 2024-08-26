#include <iostream>
#include<cstdlib>
using namespace std;
inline float cube(int a)
{
    return a*a*a;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int a ;
cout<<"enter the value of a ::"<<endl;
cin>>a;
cout<<"the cube of "<<a<<" is "<<cube(a)<<endl;
    return EXIT_SUCCESS;
}