#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;
    float x = 20.5;
    float y = 10.2;

    a += b;
    x += y;

    cout << "After using += operator:" << endl;
    cout << "a = " << a << endl;
    cout << "x = " << x << endl;

    a = 10;
    x = 20.5;

    a -= b;
    x -= y;

    cout << "After using -= operator:" << endl;
    cout << "a = " << a << endl;
    cout << "x = " << x << endl;

    return 0;
}
