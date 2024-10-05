#include <iostream>
#include <cstdlib>
#include <utility>
using namespace std;
class A
{
    int a;

public:
    // default constructor
    A()
    {
        cout << "this is default constructor" << endl;
        this->a = 0;
    }
    A(int value)
    {
        cout << "this is parameterized constructor" << endl;
        this->a = value;
    }
    A(A &other)
    {
        cout << "this is copy constructor" << endl;
        this->a = other.a;
    }
    A(int a, int b) = delete;
    A(A &&other)
    {
        cout << "this is move constructor" << endl;
        cout << "This transfers the ownership of the object" << endl;
    }
    void display()
    {
        cout << "a = " << this->a << " and the address of a is " << &a << endl;
    }
    ~A()
    {
        cout << "i am destructor" << endl;
    }
};
int main()
{
    A object1;
    object1.display();
    cout << "The address of object 1 is " << &object1 << endl
         << endl;

    A object2(432);
    object2.display();
    cout << "The address of object 2 is " << &object2 << endl
         << endl;

    // A object3(12,407);
    // object3.display();
    // cout << "The address of object 3 is " << &object3 << endl
    //      << endl;

    A object4 = move(object1);
    object4.display();
    cout << "The address of object 2 is " << &object4 << endl
         << endl;
    return EXIT_SUCCESS;
}