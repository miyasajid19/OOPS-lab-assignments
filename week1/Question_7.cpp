#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    return 0;
}
