#include <iostream>
#include <cstdlib>
using namespace std;
class A
{
public:
    float a;
    float b;
    A() : a(0), b(0) { cout << "i am default constructor" << endl; }
    A(int a): a(a),b(a){
        cout<<"i am single parameter constructor"<<endl;
    }
    A(int a , int b): a(a),b(b){
        cout<<"i am dual parameter constructor"<<endl;
    }
    A(float a, float b):a(a),b(b)
    {
        cout<<"i am dual float mode constructor"<<endl;
    }
    A(A &p)
    {
        this->a=p.a;
        this->b=p.b;
        cout<<"i am copy constructor"<<endl;
    }
};
int main()
{
    A obj;
    A obj1(432);
    A obj2(407,432);
    A obj3((float)432.407,407.432);
    A obj4(obj3);

    return EXIT_SUCCESS;
}