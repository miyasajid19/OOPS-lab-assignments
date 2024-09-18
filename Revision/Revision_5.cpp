#include <iostream>
#include <cstdlib>
using namespace std;
class X
{
public:
    int a;
    int b;
    X() { cout << "default constructor" << endl; }
    X(int a, int b) : a(a), b(b) { cout << "constructor is called" << endl; }
    void display()
    {
        cout << this->a << "\t" << this->b << endl
             << endl;
    }
    void set(int a)
    {
        this->a = this->b = a;
    }
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};
int main()
{
    X objs[] = {{432, 407}, {407, 432}, {1, 2}};
    objs[0].display();
    objs[1].display();
    objs[2].display();
    X objs1[5];
    for (int i = 0; i < 5; i++)
    {
        objs1[i].set(i,i+10);
        objs1[i].display();
    }

    X* obj=nullptr;
    cout<<"how many data do you have??";
    int size;
    cin>>size;
    obj=new X[size];
    for(int i=0;i<size;i++)
    {
        int a,b;
        cin>>a>>b;
        obj[i].set(a,b);
    }
    for(int i=0;i<size;i++)
    {
        obj[i].display();
    }
    return EXIT_SUCCESS;
}