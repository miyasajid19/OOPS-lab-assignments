#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0) 
        throw "Division by zero error";
    cout << "Result: " << a / b << endl;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    try {
        divide(num1, num2);
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
