#include <iostream>
#include <cstdlib>
using namespace std;
class OperatorOverloading
{
    int value;

public:
    OperatorOverloading()
    {
        this->value = 0;
    }
    OperatorOverloading(int value)
    {
        this->value = value;
    }
    void operator++()
    {
        this->value = value + 1;
    }
    OperatorOverloading operator++(int)
    {
        OperatorOverloading temp = *this;
        this->value++;
        return temp;
    }
    void show()
    {
        cout << "value ------> " << this->value << endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    // Redirecting input and output for testing purposes
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Creating an instance of the OperatorOverloading class
    OperatorOverloading demo;

    // Displaying the initial value
    cout << "Initial state of demo object:" << endl;
    demo.show();

    // Incrementing demo object using the postfix operator and displaying the value
    cout << "Incrementing demo object using postfix operator:" << endl;
    demo++;
    demo.show();

    // Incrementing again and showing the updated value
    demo++;
    demo.show();

    // Incrementing one more time
    demo++;
    demo.show();

    // Using the postfix operator to create a new object and display both values
    cout << "Using postfix operator to create a new object temp1:" << endl;
    OperatorOverloading temp1 = demo++;

    // Displaying the state of demo after the increment
    cout << "State of demo object after increment:" << endl;
    demo.show();

    // Displaying the state of temp1, which holds the previous value of demo
    cout << "State of temp1 object, which holds the value before the increment:" << endl;
    temp1.show();

    return EXIT_SUCCESS;
}
