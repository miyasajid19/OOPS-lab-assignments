#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Constructor
    Distance(int f = 0, float i = 0.0) : feet(f), inches(i) {}

    // Display function
    void display() const {
        cout << feet << "\' " << inches << "\"" << endl;
    }

    // Arithmetic operators
    Distance operator + (const Distance& d) const {
        int f = feet + d.feet;
        float i = inches + d.inches;
        if (i >= 12) {
            f++;
            i -= 12;
        }
        return Distance(f, i);
    }

    Distance operator - (const Distance& d) const {
        int f = feet - d.feet;
        float i = inches - d.inches;
        if (i < 0) {
            f--;
            i += 12;
        }
        return Distance(f, i);
    }

    Distance operator * (float scalar) const {
        int totalInches = feet * 12 + inches;
        totalInches *= scalar;
        int f = totalInches / 12;
        float i = totalInches % 12;
        return Distance(f, i);
    }

    Distance operator / (float scalar) const {
        int totalInches = feet * 12 + inches;
        totalInches /= scalar;
        int f = totalInches / 12;
        float i = totalInches % 12;
        return Distance(f, i);
    }

    // Relational operators
    bool operator == (const Distance& d) const {
        return (feet == d.feet && inches == d.inches);
    }

    bool operator < (const Distance& d) const {
        if (feet < d.feet) return true;
        if (feet == d.feet && inches < d.inches) return true;
        return false;
    }

    bool operator <= (const Distance& d) const {
        return (*this < d || *this == d);
    }

    // Logical operators (assuming non-zero Distance as "true")
    bool operator && (const Distance& d) const {
        return (feet != 0 || inches != 0) && (d.feet != 0 || d.inches != 0);
    }

    bool operator || (const Distance& d) const {
        return (feet != 0 || inches != 0) || (d.feet != 0 || d.inches != 0);
    }
};

int main() {
    cout<<boolalpha;
    Distance d1(5, 8.5), d2(3, 9.25);
    
    // Test Arithmetic Operators
    Distance d3 = d1 + d2;
    cout << "d1 + d2 = "; d3.display();

    d3 = d1 - d2;
    cout << "d1 - d2 = "; d3.display();

    d3 = d1 * 2.5;
    cout << "d1 * 2.5 = "; d3.display();

    d3 = d1 / 2;
    cout << "d1 / 2 = "; d3.display();

    // Test Relational Operators
    cout << "d1 == d2: " << (d1 == d2) << endl;
    cout << "d1 < d2: " << (d1 < d2) << endl;
    cout << "d1 <= d2: " << (d1 <= d2) << endl;

    // Test Logical Operators
    cout << "d1 && d2: " << (d1 && d2) << endl;
    cout << "d1 || d2: " << (d1 || d2) << endl;

    return 0;
}
