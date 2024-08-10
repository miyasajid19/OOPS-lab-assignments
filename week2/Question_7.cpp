#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

namespace Maths {
    int value = 432;
    void display() {
        cout << "This is from the Maths namespace and value is " << value << endl;
    }
}

namespace Strings {
    string value = "Hello World!";
    void display() {
        cout << "This is from the Strings namespace and value is " << value << endl;
    }
}

int main() {
#ifndef JUDGE_ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Maths::display();
    Strings::display();

    // using namespace Maths;
    using namespace Strings;
    cout << value << endl;  // This prints the value from the Strings namespace


    return EXIT_SUCCESS;
}
