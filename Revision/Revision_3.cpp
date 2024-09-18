#include <iostream>
#include <cstdlib>
using namespace std;
class A
{
public:
    int a;
    A()
    {
        this->a = 432;
        cout << "i am the A constructor" << endl;
    }
    ~A()
    {
        cout << "i am destructor of A" << endl;
    }
    void display()
    {
        cout << this->a << endl;
    }
};
class B : virtual public A
{
public:
    int b;
    B()
    {
        this->b = 407;
        cout << "i am B constructor" << endl;
    }
    ~B()
    {
        cout << "i am destructor of B" << endl;
    }
};
class C : virtual public A
{
public:
    int c;
    C()
    {
        this->c = 432 + 407;
        cout << "i am  C constructor" << endl;
    }
    ~C()
    {
        cout << "i am destructor of C" << endl;
    }
};
class D : public B, public C
{
public:
    int d;
    D()
    {
        cout << "i am D constrctor" << endl;
    }
    ~D()
    {
        cout << "i am destructor of D" << endl;
    }
};
class E : public B, virtual public A, virtual public C
{
public:
    E()
    {
        cout << "I am E constructor" << endl;
    }
    ~E()
    {
        cout << "i am destructor of E" << endl;
    }
};
int main()
{
    D a;
    a.display();
    cout << endl;
    E e;
    e.display();
    cout<<endl;
    return EXIT_SUCCESS;
}