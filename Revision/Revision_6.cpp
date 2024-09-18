#include <iostream>
#include <cstdlib>
using namespace std;

class X
{
public:
    int *a;
    int *b;
    static int count;
    int id;

    // Default constructor
    X()
    {
        cout << "default constructor is called" << endl;
        a = new int();
        b = new int();
        id = count++;
    }

    // Single parameter constructor
    X(int c)
    {
        cout << "single parameter constructor is called" << endl;
        a = new int(c);
        b = new int(c);
        id = count++;
    }

    // Dual parameter constructor
    X(int c, int d)
    {
        cout << "dual parameter constructor is called" << endl;
        a = new int(c);
        b = new int(d);
        id = count++;
    }

    // Copy constructor (shallow copy)
    X(const X &p)
    {
        cout << "copy constructor is called" << endl;
        a = p.a;   // Shallow copy
        b = p.b;   // Shallow copy
        id = p.id; // no need to assign new id
    }

    // this deep copy construcor and deep and shallow copy constructor doesnot exists together , you can make use of =operator
    //  X(X &q)
    //  {
    //      cout << "deep copy constructor is called" << endl;
    //      a = q.a;      // deep copy
    //      b = q.b;      // deep copy
    //      id = count++; // will create separate copy
    //  }
    //  Display method
    void display() const
    {
        cout << "a = " << *a << "\t and b = " << *b << " id = " << id << endl;
    }

    // Set method
    void set(int x, int y)
    {
        *a = x;
        *b = y;
    }

    // Destructor
    ~X()
    {
        cout << "deleted " << *a << " and " << *b << " of obj id :: " << id << endl;
        delete a; // Careful: This will delete the shared pointer
        delete b; // Careful: This will delete the shared pointer
    }
};

int X::count = 1;

int main()
{
    X x;
    X y(432);
    X z(407, 432);
    X a(x); // Calls copy constructor
    X b(y);
    cout << endl
         << endl;
    x.display();
    y.display();
    z.display();
    a.display();
    b.display();
    cout << endl
         << endl;

    cout << "I am changed" << endl;
    a.set(8, 13);
    cout << endl
         << endl;
    x.display();
    y.display();
    z.display();
    a.display();
    b.display();
    cout << endl
         << endl;

    x.set(13, 18);
    cout << endl
         << endl;
    x.display();
    y.display();
    z.display();
    a.display();
    b.display();
    cout << endl
         << endl;

    return EXIT_SUCCESS;
}
