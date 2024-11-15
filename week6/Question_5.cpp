#include <iostream>
using namespace std;

class AbstractBase {
public:
    AbstractBase() {
        cout << "AbstractBase constructor called." << endl;
    }

    virtual void display() = 0; // Pure virtual function, making this an abstract class
};

class Derived : public AbstractBase {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }

    void display() override {
        cout << "Derived class display function called." << endl;
    }
};

int main() {
    Derived d;
    d.display();

    return 0;
}
