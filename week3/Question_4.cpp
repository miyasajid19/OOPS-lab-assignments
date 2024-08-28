#include <iostream>
#include <cstdlib>
using namespace std;
class second;
class first
{
private:
    int a;

public:
    first() : a(432) {};
    friend int sum(first, second);
};
class second
{
private:
    int b;

public:
    second() : b(407) {};
    friend int sum(first, second);
};
int sum(first A, second B)
{
    return A.a + B.b;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    first a;
    second b;
    cout << "the sum of their private values is " << sum(a, b);
    return EXIT_SUCCESS;
}



