#include <iostream>
using namespace std;

class Test {
private:
    float value;

public:
    // Conversion constructor to convert float to Test object
    Test(float v) : value(v) {}

    // Display function to show the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    float num = 10.5;

    // Implicitly convert float to Test object using conversion constructor
    Test t = num;

    // Display the value stored in the Test object
    t.display();

    return 0;
}
