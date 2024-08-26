#include <iostream>
#include <cstdlib>
using namespace std;

class Complex
{
public:
    int x;
    int y;

    Complex() : x(0), y(0) {}
    Complex(int x) : x(x), y(0) {}
    Complex(int x, int y) : x(x), y(y) {}
    ~Complex() {}

    void display() const
    {
        cout << x << " + " << y << "i" << endl;
    }
};

Complex add(const Complex &a, const Complex &b)
{
    return Complex(a.x + b.x, a.y + b.y);
}

Complex *addByAddress(const Complex *a, const Complex *b)
{
    Complex *result = new Complex(a->x + b->x, a->y + b->y);
    return result;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Complex z1(1, 2), z2(3, 4), z;
    z1.display();
    z2.display();

    z = add(z1, z2);
    z.display();

    Complex *a = &z1;
    Complex *b = &z2;

    Complex *c = addByAddress(a, b);
    c->display();

    delete c;
    return EXIT_SUCCESS;
}
