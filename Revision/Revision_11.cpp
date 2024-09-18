#include <iostream>
#include <cstdlib>
using namespace std;
class B;
class A
{
private:
    int a;

protected:
    int b;

public:
    int c;
    A()
    {
        this->a = 432;
        this->b = 407;
        this->c = a + b;
    }
    friend B;
};
class B
{
public:
    void display()
    {
        A a;
        cout << a.a << "\t" << a.b << "\t" << a.c << endl;
    }
};
int main()
{
    B b;
    b.display();
    return EXIT_SUCCESS;
}