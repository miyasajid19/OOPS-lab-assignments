#include <iostream>
using namespace std;

class Time {
private:
    int h, m, s;

public:
    // Constructor
    Time(int hours = 0, int minutes = 0, int seconds = 0) : h(hours), m(minutes), s(seconds) {}

    // Overloading the + operator
    Time operator + (const Time& t) const {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m + temp.s / 60;  // Carry over seconds to minutes
        temp.s %= 60;
        temp.h = h + t.h + temp.m / 60;  // Carry over minutes to hours
        temp.m %= 60;
        return temp;
    }

    // Function to display time in hh:mm:ss format
    void show() const {
        cout << (h < 10 ? "0" : "") << h << ":"
             << (m < 10 ? "0" : "") << m << ":"
             << (s < 10 ? "0" : "") << s << endl;
    }
};

int main() {
    Time t1(5, 15, 34), t2(9, 53, 58), t3;

    // Adding two Time objects using the overloaded + operator
    t3 = t1 + t2;

    // Displaying the result
    cout << "Sum of time: ";
    t3.show();

    return 0;
}
