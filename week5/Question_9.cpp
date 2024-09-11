#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string make, string model, int year)
        : make(make), model(model), year(year) {}

    void setMake(string make) { this->make = make; }
    string getMake() { return this->make; }

    void setModel(string model) { this->model = model; }
    string getModel() { return this->model; }

    void setYear(int year) { this->year = year; }
    int getYear() { return this->year; }

    virtual void Display()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Truck : public Vehicle
{
protected:
    float load_capacity;

public:
    Truck(string make, string model, int year, float load_capacity)
        : Vehicle(make, model, year), load_capacity(load_capacity) {}

    void setLoadCapacity(float load_capacity) { this->load_capacity = load_capacity; }
    float getLoadCapacity() { return this->load_capacity; }

    void Display() override
    {
        Vehicle::Display();
        cout << "Load Capacity: " << load_capacity << " tons" << endl;
    }
};

class RefrigeratedTruck : public Truck
{
private:
    float temperature_control;

public:
    RefrigeratedTruck(string make, string model, int year, float load_capacity, float temperature_control)
        : Truck(make, model, year, load_capacity), temperature_control(temperature_control) {}

    void setTemperatureControl(float temperature_control) { this->temperature_control = temperature_control; }
    float getTemperatureControl() { return this->temperature_control; }

    void Display() override
    {
        Truck::Display();
        cout << "Temperature Control: " << temperature_control << "°C" << endl;
    }
};

int main()
{
    Truck truck("Ford", "F-150", 2020, 15.5);
    cout << "Truck Information:" << endl;
    truck.Display();
    cout << endl;

    RefrigeratedTruck refrigeratedTruck("Mercedes", "Sprinter", 2021, 10.2, -18.0);
    cout << "Refrigerated Truck Information:" << endl;
    refrigeratedTruck.Display();

    return 0;
}
