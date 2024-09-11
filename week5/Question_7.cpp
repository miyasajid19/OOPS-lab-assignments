#include <iostream>
#include <cstdlib>
using namespace std;
class Speedometer
{
protected:
    float speed;

public:
    Speedometer() : speed(0.00) {}
    Speedometer(float speed) : speed(speed) {}
    void setSpeed(float speed) { this->speed = speed; }
    float getSpeed() { return this->speed; }
    void Display() { cout << "Speed :: " << this->speed << "km/hr " << endl; }
};
class Thermometer
{
protected:
    float temperature;

public:
    Thermometer() : temperature(13) {}
    Thermometer(float temperature) : temperature(temperature) {}
    void settemperature(float temperature) { this->temperature = temperature; }
    float gettemperature() { return this->temperature; }
    void Display() { cout << "Temperature :: " << this->temperature << " degree centigrade" << endl; }
};
class FuelGauge
{
protected:
    float fuel;

public:
    FuelGauge() : fuel(0.00) {}
    FuelGauge(float fuel) : fuel(fuel) {}
    void setfuel(float fuel) { this->fuel = fuel; }
    float getfuel() { return this->fuel; }
    void Display() { cout << "Fuel :: " << this->fuel << "Litre" << endl; }
};
class CarDashboard : public Speedometer, public Thermometer, public FuelGauge
{
public:
    CarDashboard() {}
    CarDashboard(float speed, float temperature, float fuel) : Speedometer(speed), Thermometer(temperature), FuelGauge(fuel) {}
    void Display()
    {
        Speedometer::Display();
        Thermometer::Display();
        FuelGauge::Display();
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    CarDashboard lamborgini;
    lamborgini.Display();
    return EXIT_SUCCESS;
}