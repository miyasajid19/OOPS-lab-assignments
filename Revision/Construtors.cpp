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
    ~A()
    {
        cout << "I am destructor of A" << endl;
    }
    void display()
    {
        cout << "a=" << this->a << endl;
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout << "i am constructor of B"<<endl;
    }
    ~B()
    {
        cout << "I am destructor of B" << endl;
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "i am constructor of C"<<endl;
    }
    ~C()
    {
        cout << "I am destructor of C" << endl;
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << "i am constructor of D"<<endl;
    }
    ~D()
    {
        cout << "I am destructor of D" << endl;
    }
};
int main()
{
    D d;
    d.display();
    return EXIT_SUCCESS;
}