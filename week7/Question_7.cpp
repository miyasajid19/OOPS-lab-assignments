#include <iostream>
using namespace std;

class Test {
private:
    int value;

public:
    // Constructor
    Test(int v = 0) : value(v) {}

    // Friend function to overload the unary - operator
    friend void operator-(Test &x);

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Definition of friend function to overload unary - operator
void operator-(Test &x) {
    x.value = -x.value;  // Negates the value
}

int main() {
    Test x1(10);  // Initialize object with value 10
    cout << "Original ";
    x1.display();

    // Using overloaded - operator to negate the value
    -x1;

    cout << "After negation ";
    x1.display();

    return 0;
}
