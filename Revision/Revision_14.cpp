#include <iostream>
#include <cstdlib>
using namespace std;
class X
{
    int x;
    int y;

public:
    X()
    {
        x = 432;
        y = 407;
    }
    void display()
    {

        cout << "X.x==" << this->x << " and addres is  " << &x << endl;
        cout << "X.y==" << this->y << " and addres is  " << &y << endl;
    }
    int *address()
    {
        return &x;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    X x1;
    x1.display();
    X *ptr;
    ptr = &x1;
    ptr->display();
    cout << "address  of pointer  is :: " << ptr << endl;
if (reinterpret_cast<void*>(ptr) == reinterpret_cast<void*>(x1.address()))
{
    cout << "Pointer to the class points to the first data member of the class." << endl;
}
else
{
    cout << "Pointer to the class does not point to the first data member of the class." << endl;
}

    return EXIT_SUCCESS;
}