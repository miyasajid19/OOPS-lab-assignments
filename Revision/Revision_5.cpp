#include <iostream>
#include <cstdlib>
using namespace std;
class X
{
public:
    int a;
    int b;
    X(int a, int b) : a(a), b(b) { cout << "constructor is called" << endl; }
    void display()
    {
        cout<<this->a<<"\t"<<this->b<<endl<<endl;
    }
};
int main()
{
    X objs[]={{432,407},{407,432},{1,2}};
    objs[0].display();
    objs[1].display();
    objs[2].display();
    return EXIT_SUCCESS;
}