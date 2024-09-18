#include <iostream>
#include <cstdlib>
using namespace std;
class Y;
class X
{
private:
    int a;

public:
    X()
    {
        this->a = 432;
    }
    friend int add(X, Y);
};
class Y
{
private:
    int a;

public:
    Y()
    {
        this->a = 407;
    }
    friend int add(X, Y);
};
int add(X a, Y b)
{
    return a.a + b.a;
}
int main()
{
    X x;
    Y y;
    cout << add(x, y);
    return EXIT_SUCCESS;
}