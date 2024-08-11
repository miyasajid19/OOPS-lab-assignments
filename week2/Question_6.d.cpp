#include <iostream>
#include <cstdlib>
#include <string>
int main()
{
#ifndef JUDGE_ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
std :: string a,b;
std:: cout<<"enter the first string :: "<<std::endl;
std:: getline(std :: cin,a);
std::cout<<a<<std::endl;
std:: cout<<"enter the second string :: "<<std::endl;
std:: getline(std :: cin,b);
std::cout<<b<<std::endl;
    return EXIT_SUCCESS;
}
