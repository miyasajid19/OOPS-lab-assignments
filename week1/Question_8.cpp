#include <iostream>
using namespace std;

int main() {
    int daysLate;
    float fine = 0.0;

    cout << "Enter the number of days late: ";
    cin >> daysLate;

    if (daysLate > 30) {
        cout << "Your membership has been cancelled." << endl;
    } else if (daysLate > 10) {
        fine = 5.0;
        cout << "Fine: " << fine << " rupees" << endl;
    } else if (daysLate >= 6) {
        fine = 1.0;
        cout << "Fine: " << fine << " rupees" << endl;
    } else if (daysLate > 0) {
        fine = 0.50;
        cout << "Fine: " << fine << " rupees" << endl;
    } else {
        cout << "No fine, the book is returned on time." << endl;
    }

    return 0;
}
