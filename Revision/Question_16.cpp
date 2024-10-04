#include <iostream>
#include <cstdlib>
using namespace std;

namespace NarutoUzumaki
{
    void display()
    {
        cout << "I’m not gonna run away, I never go back on my word! That’s my nindo: my ninja way!" << endl;
    }
};

namespace KakashiHatake
{
    void display()
    {
        cout << "Those who break the rules are scum, but those who abandon their friends are worse than scum." << endl;
    }
};

namespace ItachiUchiha
{
    void display()
    {
        cout << "People live their lives bound by what they accept as correct and true. That's how they define 'reality.' But what does it mean to be 'correct' or 'true?' Merely vague concepts... their 'reality' may all be a mirage." << endl;
    }
};

namespace PainNagato
{
    void display()
    {
        cout << "If you don’t share someone’s pain, you can never understand them." << endl;
    }
};

namespace Jiraiya
{
    void display()
    {
        cout << "A person grows up when he’s able to overcome hardships. Protection is important, but there are some things that a person must learn on their own." << endl;
    }
};

namespace ObitoUchiha
{
    void display()
    {
        cout << "The moment people come to know love, they run the risk of carrying hate." << endl;
    }
};

namespace RockLee
{
    void display()
    {
        cout << "A dropout will beat a genius through hard work." << endl;
    }
};

namespace Gaara
{
    void display()
    {
        cout << "In order to escape a path of loneliness, I have no choice but to work hard to protect my village. As I do that, I believe I’ll be able to create bonds with others." << endl;
    }
};

namespace MinatoNamikaze
{
    void display()
    {
        cout << "When you have something you want to protect, only then do you become truly strong." << endl;
    }
};

namespace HinataHyuga
{
    void display()
    {
        cout << "When you have someone precious to you, you become genuinely strong." << endl;
    }
};

int main()

{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ObitoUchiha::display();
    NarutoUzumaki::display();
    KakashiHatake::display();
    ItachiUchiha::display();
    PainNagato::display();
    Jiraiya::display();
    RockLee::display();
    Gaara::display();
    MinatoNamikaze::display();
    HinataHyuga::display();
    return EXIT_SUCCESS;
}