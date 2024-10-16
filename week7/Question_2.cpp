#include <iostream>
#include <cstdlib>
using namespace std;
class OperatorOverloading
{
    int value;

public:
    OperatorOverloading() : value(0) {}
    OperatorOverloading(int value) : value(value) {}
    void show()
    {
        cout << "value ----> " << this->value << endl;
    }

    OperatorOverloading operator+(OperatorOverloading temp)
    {
        return OperatorOverloading(this->value + temp.value);
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    OperatorOverloading temp1(407);
    OperatorOverloading temp2(432);
    temp1.show();
    temp2.show();
    OperatorOverloading temp3 = temp1 + temp2;
    temp3.show();
    temp3 = temp1 + temp2 + temp3 + temp2 + temp1;
    temp3.show();
    return EXIT_SUCCESS;
}