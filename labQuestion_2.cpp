#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Config
{
    static int no_of_players;
    int UID;
    string Language;

public:
    Config()
    {
        no_of_players++;
        this->Language = "English";
        this->UID = no_of_players;
    }
    Config(string Language)
    {
        no_of_players++;
        this->Language = Language;
        this->UID = no_of_players;
    }
    Config(Config &ToCopy)
    {
        no_of_players++;
        this->UID = no_of_players;
        this->Language = ToCopy.Language;
    }
    ~Config()
    {
        no_of_players--;
    }
    static void ActivePlayers()
    {
        cout << "Total number of active players are: " << no_of_players << endl;
    }
    void SetLanguage(string Language)
    {
        this->Language = Language;
    }
    string GetLanguage()
    {
        return this->Language;
    }
    int getUID()
    {
        return this->UID;
    }
    void Copy(Config &ToCopy)
    {
        this->Language = ToCopy.Language;
    }
};

int Config::no_of_players = 0;

int main()
{
    int size;
    cout << "How many players do you have? ";
    cin >> size;

    static Config dummyplayer;
    Config::ActivePlayers();
    cout << "There is a default language: " << dummyplayer.GetLanguage() << endl;

    Config Players[size];
    string str;
    for (int i = 0; i < size; i++)
    {
        cout << "\nPlayer " << (i + 1) << " configuration:\n";
        cout << "Enter 1 to set language\nEnter 2 to use default language\nEnter 3 to copy configuration from another player\n";
        char ch;
        cin >> ch;
        switch (ch)
        {
        case '1':
            cout << "Enter the language: ";
            cin.ignore(); // To ignore leftover newline
            getline(cin, str);
            Players[i].SetLanguage(str);
            break;
        case '2':
            cout << "Language set to default (English)\n";
            break;
        case '3':
            cout << "Available players:\n";
            for (int j = 0; j < i; j++)
            {
                cout << "Player UID: " << Players[j].getUID() << "\tLanguage: " << Players[j].GetLanguage() << endl;
            }
            if (i == 0)
            {
                cout << "No players available to copy from!\n";
                break;
            }
            int uid;
            cout << "Enter UID to copy from: ";
            cin >> uid;
            if (uid > 0 && uid <= i)
            {
                Players[i].Copy(Players[uid - 1]);
                cout << "Language copied from Player UID " << uid << endl;
            }
            else
            {
                cout << "Invalid UID!\n";
                --i; // To reattempt configuration for this player
            }
            break;
        default:
            cout << "Invalid option! Try again.\n";
            --i; // To reattempt configuration for this player
            break;
        }
    }

    cout << "\nFinal Player Configurations:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Player UID: " << Players[i].getUID() << "\tLanguage: " << Players[i].GetLanguage() << endl;
    }

    return EXIT_SUCCESS;
}
