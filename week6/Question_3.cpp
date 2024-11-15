#include <iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "Base class function called." << endl;
    }

    virtual void display()
    {
        cout << "Base class display function called." << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class function called." << endl;
    }

    void display() override
    {
        cout << "Derived class display function called." << endl;
    }
};

int main()
{
    // Case (i): Base* b = new Base(); - Valid
    Base *b1 = new Base();
    b1->show();    // Calls Base::show
    b1->display(); // Calls Base::display

    // Case (ii): Base* b = new Derived(); - Valid (Polymorphism)
    Base *b2 = new Derived();
    b2->show();    // Calls Base::show (non-virtual function, no polymorphism)
    b2->display(); // Calls Derived::display (virtual function, demonstrates polymorphism)

    // Case (iii): Derived* d = new Base(); - Invalid (compilation error)
    // Derived* d1 = new Base(); // Uncommenting this line will cause a compilation error

    // Case (iv): Derived* d = new Derived(); - Valid
    Derived *d2 = new Derived();
    d2->show();    // Calls Derived::show
    d2->display(); // Calls Derived::display

    // Cleaning up allocated memory
    delete b1;
    delete b2;
    delete d2;

    return 0;
}
