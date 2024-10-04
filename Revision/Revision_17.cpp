#include <iostream>
#include <cstdlib>
using namespace std;
class demo
{
private:
    int a;

public:
    demo(int);
    demo(demo &);
    ~demo();
    void display();
};

demo::demo(int value)
{
    this->a = value;
}
demo::demo(demo &tocopy)
{
    this->a = tocopy.a;
}
demo::~demo()
{
}
void demo::display()
{
    cout << "a == " << a << " and the address is " << &a << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    demo original(432);
    original.display();

    demo duplicate(original);
    duplicate.display();
    return EXIT_SUCCESS;
}