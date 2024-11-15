#include <iostream>
using namespace std;
// Compile-time polymorphism: Function Overloading
class OverloadDemo {
public:
    void display(int i) {
        cout << "Display integer: " << i << endl;
    }

    void display(double d) {
        cout << "Display double: " << d << endl;
    }

    void display(const string& str) {
        cout << "Display string: " << str << endl;
    }
};

// Runtime polymorphism: Virtual Function
class Parent {
public:
    virtual void show() {
        cout << "Parent class show function called." << endl;
    }

    virtual void display() {
        cout << "Parent class display function called." << endl;
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "Child class show function called." << endl;
    }

    void display() override {
        cout << "Child class display function called." << endl;
    }
};

int main() {
    // Demonstrating Compile-time Polymorphism (Function Overloading)
    OverloadDemo overloadDemo;
    overloadDemo.display(5);
    overloadDemo.display(3.14);
    overloadDemo.display("Hello");

    // Demonstrating Runtime Polymorphism (Virtual Function)
    Parent* ptr;
    Parent parentObj;
    Child childObj;

    ptr = &parentObj;
    ptr->show();        // Calls Parent's show function
    ptr->display();     // Calls Parent's display function

    ptr = &childObj;
    ptr->show();        // Calls Child's show function (runtime polymorphism)
    ptr->display();     // Calls Child's display function (runtime polymorphism)

    return 0;
}
