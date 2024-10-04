#include <iostream>
#include <cstdlib>
using namespace std;

class Time
{
    int hour;
    int minute;
    int second;

public:
    Time() : hour(0), minute(0), second(0) {}

    Time(int hour, int minute, int second)
    {
        int temp = hour * 60 * 60 + minute * 60 + second;
        this->hour = temp / (60 * 60);
        temp %= (60 * 60);
        this->minute = temp / 60;
        this->second = temp % 60;
    }

    void Display() const
    {
        cout << this->hour << " : " << this->minute << " : " << this->second << endl;
    }

    friend Time differenceTime(const Time&, const Time&);
};

Time differenceTime(const Time& t1, const Time& t2)
{
    int time1 = t1.hour * 60 * 60 + t1.minute * 60 + t1.second;
    int time2 = t2.hour * 60 * 60 + t2.minute * 60 + t2.second;
    int difference = abs(time1 - time2);

    Time temp;
    temp.hour = difference / (60 * 60);
    difference %= (60 * 60);
    temp.minute = difference / 60;
    difference %= 60;
    temp.second = difference;

    return temp;
}

int main()
{
    int hour, minute, second;
    cout << "Enter time 1 (hour, minute, second): ";
    cin >> hour >> minute >> second;
    Time time1(hour, minute, second);

    cout << "Enter time 2 (hour, minute, second): ";
    cin >> hour >> minute >> second;
    Time time2(hour, minute, second);

    Time timeDiff = differenceTime(time1, time2);
    time2.Display();
    time1.Display();
    cout << "Time difference: ";
    timeDiff.Display();

    return EXIT_SUCCESS;
}
