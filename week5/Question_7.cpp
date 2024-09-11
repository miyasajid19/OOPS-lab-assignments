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

    void Display()
    {
        cout << "Speed: " << this->speed << " km/hr" << endl;
    }
};

class Thermometer
{
protected:
    float temperature;

public:
    Thermometer() : temperature(13) {}
    Thermometer(float temperature) : temperature(temperature) {}

    void setTemperature(float temperature) { this->temperature = temperature; }
    float getTemperature() { return this->temperature; }

    void Display()
    {
        cout << "Temperature: " << this->temperature << " degrees centigrade" << endl;
    }
};

class FuelGauge
{
protected:
    float fuel;

public:
    FuelGauge() : fuel(0.00) {}
    FuelGauge(float fuel) : fuel(fuel) {}

    void setFuel(float fuel) { this->fuel = fuel; }
    float getFuel() { return this->fuel; }

    void Display()
    {
        cout << "Fuel: " << this->fuel << " liters" << endl;
    }
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
    CarDashboard lamborghini(120.5, 25.6, 60.2);

    cout << "Car Dashboard Information:" << endl;
    lamborghini.Display();

    return EXIT_SUCCESS;
}
