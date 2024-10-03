#include <iostream>
#include <cstdlib>
using namespace std;
class B;
class A
{
    int a;

public:
    A()
    {
        this->a = 432;
    }
    void display()
    {
        cout << "A.a==" << this->a << endl;
    }
    friend void swapPrivate(A &, B &);
};
class B
{
    int b;

public:
    B()
    {
        this->b = 407;
    }
    void display()
    {
        cout << "B.b==" << this->b << endl;
    }
    friend void swapPrivate(A &, B &);
};
void swapPrivate(A &obj1, B &obj2)
{
    int temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
    cout << "swapped" << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    A obj1;
    B obj2;
    cout << "Before Swapping :: " << endl;
    obj1.display();
    obj2.display();
    swapPrivate(obj1, obj2);
    cout << "After Swapping :: " << endl;
    obj1.display();
    obj2.display();
    return EXIT_SUCCESS;
}