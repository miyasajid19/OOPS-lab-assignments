#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator + (Complex const &obj) {
        Complex c;
        c.real = real + obj.real;
        c.imag = imag + obj.imag;
        return c;
    }

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);

    // Adding two Complex objects
    Complex c3 = c1 + c2;

    // Displaying the result
    cout << "Result of addition: ";
    c3.display();

    return 0;
}
