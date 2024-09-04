#include <iostream>
using namespace std;

class Mammels
{
public:
    void speak()
    {
        cout << "Animal can make sound" << endl;
    }
    void characters()
    {
        cout << "They have lungs for respiration" << endl;
        cout << "They are viviparous" << endl;
    }
};

class Aves
{
public:
    void speak()
    {
        cout << "They do pick pick pika" << endl;
    }
    void characters()
    {
        cout << "They have lungs for respiration" << endl;
        cout << "Their bones have airbags, which reduce their weight, helping them fly" << endl;
        cout << "They are oviparous" << endl;
    }
};

class Human : public Mammels
{
public:
    void speak()
    {
        cout << "Humans can speak different languages" << endl;
    }
};

class Parrot : public Aves
{
public:
    void speak()
    {
        cout << "Parrots can mimic human speech" << endl;
    }
};

class Archeopteryx : public Mammels, public Aves
{
public:
    void characters()
    {
        Mammels::characters();
        Aves::characters();
    }

    void speak()
    {
        Mammels::speak();
        Aves::speak();
    }
};

int main()
{
    Human human;
    Parrot parrot;
    Archeopteryx arch;

    human.speak();
    human.characters();

    parrot.speak();
    parrot.characters();

    arch.speak();
    arch.characters();

    return 0;
}
