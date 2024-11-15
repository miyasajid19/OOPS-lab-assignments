#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function called." << endl;
    }

    virtual void display() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function called." << endl;
    }

    void display() override {
        cout << "Derived class display function called." << endl;
    }
};

int main() {
    Base* b;              // Pointer of Base type
    Derived d;            // Derived class object
    b = &d;

    b->show();            // Calls Derived's show function (virtual function)
    b->display();         // Calls Derived's display function (pure virtual function override)

    return 0;
}
