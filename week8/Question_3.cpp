//  Write the template for the following function in C++ and execute it for various datatypes

// int MyMax(int a, int b){
// return x>y?x:y;
// }
#include <iostream>
#include <cstdlib>
using namespace std;
template <typename T>
T MyMax(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << MyMax("sajid", "miya") << endl;
    cout << MyMax(432, 407) << endl;
    cout << MyMax(432.407, 407.432) << endl;
    cout << MyMax('a', 'b') << endl;
    cout << MyMax('?', '.') << endl;
    return EXIT_SUCCESS;
}