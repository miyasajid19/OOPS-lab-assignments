#include <iostream>
#include <cstdlib>
using namespace std;

class Y; // Forward declaration of class Y

class X
{
private:
    int x;

public:
    X() : x(432) {}
    ~X() {}
    friend void swap(X &a, Y &b);
    void display()
    {
        cout << "Value of x in class X: " << this->x << endl;
    }
};

class Y
{
private:
    int y;

public:
    Y() : y(407) {}
    ~Y() {}
    friend void swap(X &a, Y &b);
    void display()
    {
        cout << "Value of y in class Y: " << this->y << endl;
    }
};

void swap(X &a, Y &b)
{
    cout << "\nSwapping the values of x and y..." << endl;
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    X x;
    Y y;

    cout << "Initial values:" << endl;
    x.display();
    y.display();

    swap(x, y);

    cout << "\nValues after swapping:" << endl;
    x.display();
    y.display();

    return EXIT_SUCCESS;
}
