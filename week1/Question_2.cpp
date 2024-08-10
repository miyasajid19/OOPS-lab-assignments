#include <iostream>
using namespace std;

int main() {
    int integerValue;
    float decimalValue;
    char characterValue;

    cout << "Enter an integer: ";
    cin >> integerValue;

    cout << "Enter a decimal number: ";
    cin >> decimalValue;

    cout << "Enter a character: ";
    cin >> characterValue;

    cout << "You entered integer: " << integerValue << endl;
    cout << "You entered decimal: " << decimalValue << endl;
    cout << "You entered character: " << characterValue << endl;

    return 0;
}
