#include <iostream>
#include <cstdlib>
using namespace std;

class Parent
{
protected:
    int a; // Protected member, accessible in Derived class

private:
    int b; // Private member, NOT accessible in Derived class

public:
    int c; // Public member, becomes protected in Derived class due to protected inheritance

    Parent()
    {
        this->a = 432;
        this->b = 407;
        this->c = a + b; // c is initialized as a + b
    }
};

class Derived : protected Parent
{
public:
    void display()
    {
        cout << "a: " << this->a << endl;  // Accessible (protected in Parent)
        // cout << this->b << endl;        // Not accessible, would cause an error
        cout << "c: " << this->c << endl;  // Accessible (protected in Derived)
    }

    void Modify(int a, int c)
    {
        this->a = a; // Modify the protected member a
        this->c = c; // Modify the protected member c
    }
};

int main()
{
    Derived obj;
    obj.display();      // Displays initial values of a and c

    // Modify values of a and c using Modify function
    obj.Modify(407, 432);
    obj.display();      // Displays modified values of a and c

    return EXIT_SUCCESS;
}
