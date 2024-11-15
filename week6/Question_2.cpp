#include <iostream>
using namespace std;
class Parent {
public:
    void showParent() {
        cout << "Parent class function called." << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "Child class function called." << endl;
    }
};

int main() {
    Child* childPtr = new Child();

    // Using the arrow operator to access functions of both parent and child class
    childPtr->showParent();  // Accessing Parent class function
    childPtr->showChild();   // Accessing Child class function

    delete childPtr;
    return 0;
}
