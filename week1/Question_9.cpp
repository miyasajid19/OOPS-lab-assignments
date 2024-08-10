#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;
    char again;

    while (true) {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero" << endl;
                break;
            default:
                cout << "Error: Invalid operation" << endl;
                cout << "Do you want to try again? (y/n): ";
                cin >> again;
                if (again == 'y' || again == 'Y') {
                    continue;
                } else {
                    cout << "Exiting program." << endl;
                    return 0;
                }
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> again;
        if (!(again == 'y' || again == 'Y')) {
            cout << "Exiting program." << endl;
            break;
        }
    }

    return 0;
}
