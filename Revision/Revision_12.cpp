#include <iostream>
#include <cstdlib>
using namespace std;
class X
{
    int a;

protected:
    int b;

public:
    int c;
    X():a(0),b(0),c(0){}
    void display();
    void set(int);
};
void X::display()
{
    cout << this->a << "\t" << this->b << "\t" << this->c << endl;
}
void X:: set(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
X a;

    return EXIT_SUCCESS;
}