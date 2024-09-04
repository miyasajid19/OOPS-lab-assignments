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
    int c; // Public member, becomes private/protected/public based on the type of inheritance

    Parent()
    {
        this->a = 432;
        this->b = 407;
        this->c = a + b; // c is initialized as a + b
    }
};

// Private inheritance
class Private : private Parent
{
public:
    void display()
    {
        // 'a' is inherited privately in 'Private' class, so it's private here
        cout << "a : " << this->a << endl;
        // cout << "b : " << this->b << endl; // Error: 'b' is private in Parent and not accessible in derived class
        cout << "c : " << this->c << endl;
    }
};

// Protected inheritance
class Protected : protected Parent
{
public:
    void display()
    {
        // 'a' is inherited as protected in 'Protected' class
        cout << "a : " << this->a << endl;
        // cout << "b : " << this->b << endl; // Error: 'b' is private in Parent and not accessible in derived class
        cout << "c : " << this->c << endl;
    }
};

// Public inheritance
class Public : public Parent
{
public:
    void display()
    {
        // 'a' is inherited as protected, so accessible in this class
        cout << "a : " << this->a << endl;
        // cout << "b : " << this->b << endl; // Error: 'b' is private in Parent and not accessible in derived class
        cout << "c : " << this->c << endl;
    }
};

int main()
{
    // Demonstrating private inheritance
    Private privateObj;
    // privateObj.a = 10; // Error: 'a' is private in Private class
    // privateObj.c = 20; // Error: 'c' is private in Private class
    privateObj.display(); // Can access 'a' and 'c' only within the class

    // Demonstrating protected inheritance
    Protected protectedObj;
    // protectedObj.a = 10; // Error: 'a' is protected in Protected class
    // protectedObj.c = 20; // Error: 'c' is protected in Protected class
    protectedObj.display(); // Can access 'a' and 'c' only within the class

    // Demonstrating public inheritance
    Public publicObj;
    // publicObj.a = 10; // Error: 'a' is protected, can only be accessed within Public class
    publicObj.c = 20;    // 'c' is public, so it can be accessed and modified outside the class
    publicObj.display(); // Can access 'a' within class, and 'c' is accessible outside

    return EXIT_SUCCESS;
}
