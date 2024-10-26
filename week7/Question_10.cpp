#include <iostream>
#include <cmath>
using namespace std;

class Polar {
private:
    float radius;
    float angle; // angle in radians

public:
    // Constructor to initialize Polar coordinates
    Polar(float r, float a) : radius(r), angle(a) {}

    // Getter functions for radius and angle
    float getRadius() const { return radius; }
    float getAngle() const { return angle; }
};

class Cartesian {
private:
    float x;
    float y;

public:
    // Conversion constructor: converts Polar to Cartesian
    Cartesian(const Polar& p) {
        x = p.getRadius() * cos(p.getAngle());
        y = p.getRadius() * sin(p.getAngle());
    }

    // Function to display Cartesian coordinates
    void show() const {
        cout << "Cartesian Coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Polar p(10, 0.785398);  // Creating a Polar object with radius = 10 and angle = 45 degrees (0.785398 radians)
    
    // Convert Polar to Cartesian
    Cartesian c = p;

    // Display the Cartesian coordinates
    c.show();

    return 0;
}
