#include <iostream>
using namespace std;

class Test {
private:
    float value;

public:
    // Constructor to initialize the Test object
    Test(float v) : value(v) {}

    // Conversion operator to convert Test object to float
    operator float() const {
        return value;
    }

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Test t(15.75);  // Creating a Test object with value 15.75

    // Implicitly converting Test object to float
    float num = t;

    // Displaying the results
    cout << "Test object: ";
    t.display();
    cout << "Converted to float: " << num << endl;

    return 0;
}
