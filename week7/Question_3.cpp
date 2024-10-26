#include <iostream>
#include<cstdlib>
using namespace std;
class temp
{
int value;
public:
temp():value(0){}
temp(int value):value(value){}
temp operator-()
{
    return temp(-this->value);
}
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return EXIT_SUCCESS;
}