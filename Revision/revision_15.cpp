#include <iostream>
#include <cstdlib>
using namespace std;
int x = 432;
class X
{
public:
    int y;
    static int a;
    X(int);
    void display();
};
//:: (scope resolution can be used to define the  class fuction outside the class)
X::X(int value)
{
    this->y = y;
}
void X::display()
{
    cout << "y :: " << this->y << endl;
}
//:: can be used to set value outside the class as well
int X::a = 432;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x = 407;
    // we can access the global varibale using :: (scope resolution)
    cout << "local value of x is :: " << x << endl;
    cout << "global value of x is :: " << ::x << endl;
    cout << X::a << " is the static variable and it is located in " << &(X::a) << endl;
    X x1(407);
    cout << x1.a << " is the static variable and it is located in " << &(x1.a) << endl;
    // the static variable occupies the same address
    cout << endl;
    cout << "Content of x1 :: " << endl;
    cout << "a :: " << x1.a << " -->" << &(x1.a) << endl;
    cout << "a :: " << x1.y << " -->" << &(x1.y) << endl;
    cout << endl;
    X x2(839);
    cout << "Content of x2 :: " << endl;
    cout << "a :: " << x2.a << " -->" << &(x2.a) << endl;
    cout << "a :: " << x2.y << " -->" << &(x2.y) << endl;
    //static variable has one address and is accessed by all
    return EXIT_SUCCESS;
}