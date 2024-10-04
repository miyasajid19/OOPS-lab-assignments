#include <iostream>
#include <cstdlib>
using namespace std;
class A
{
public:
    int a;
    A()
    {
        cout << "i am constructor of A" << endl;
        this->a = 432;
    }
    virtual ~A()// if virtual is not used then the object willbe partially destroyed
    {
        cout << "I am destructor of A" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "i am constructor of B" << endl;
    }
    ~B()
    {
        cout << "I am destructor of B" << endl;
    }
};
int main()
{
    A *b;
    b = new B;
    delete b;
    return EXIT_SUCCESS;
}