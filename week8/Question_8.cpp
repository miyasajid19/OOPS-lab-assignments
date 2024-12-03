#include <iostream>
#include <cstdlib>
using namespace std;
template <class T>
class solution
{
    T val;

public:
    solution(T val);
    T divideBy2();
    void display();
};
template <typename T>
solution<T>::solution(T val)
{
    this->val = val;
}
template <typename T>
T solution<T>::divideBy2()
{
    return this->val / 2;
}
template <typename T>
void solution<T>::display()
{
    cout << this->val << "\n";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Example for int type
    solution<int> soln_int(432);
    soln_int.display();
    cout << soln_int.divideBy2() << endl;

    // Example for int type
    solution<int> soln_int1(407);
    soln_int1.display();
    cout << soln_int1.divideBy2() << endl;

    // Example for long type
    solution<long> soln_long(123456789);
    soln_long.display();
    cout << soln_long.divideBy2() << endl;

    // Example for float type
    solution<float> soln_float(432.407);
    soln_float.display();
    cout << soln_float.divideBy2() << endl;

    // Example for double type
    solution<double> soln_double(10.54321);
    soln_double.display();
    cout << soln_double.divideBy2() << endl;

    // Example for long double type
    solution<long double> soln_long_double(10.54321);
    soln_long_double.display();
    cout << soln_long_double.divideBy2() << endl;

    return EXIT_SUCCESS;
}