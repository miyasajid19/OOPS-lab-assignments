#include <iostream>
#include <cstdlib>
using namespace std;

class A
{
public:
    float a;
    float b;

    A() : a(0), b(0)
    {
        cout << "I am default constructor" << endl;
    }

    A(int a) : a(a), b(a)
    {
        cout << "I am single parameter constructor" << endl;
    }

    A(int a, int b) : a(a), b(b)
    {
        cout << "I am dual parameter constructor" << endl;
    }

    A(float a, float b) : a(a), b(b)
    {
        cout << "I am dual float mode constructor" << endl;
    }

    A(const A &p)
    {
        this->a = p.a;
        this->b = p.b;
        cout << "I am copy constructor" << endl;
    }
};

int main()
{
    A obj;                      // Calls default constructor
    A obj1(432);                // Calls single parameter constructor
    A obj2(407, 432);           // Calls dual parameter constructor
    A obj3(432.407f, 407.432f); // Calls dual float mode constructor
    A obj4(obj3);               // Calls copy constructor

    return EXIT_SUCCESS;
}
