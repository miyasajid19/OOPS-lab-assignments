#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
class Team;
class Player
{
    string name;
    int score;

public:
    Player(string name, int score) : name(name), score(score) {}
    friend int TotalScore(Team);
};
class Team
{
    vector<Player> players;

public:
    string name;
    Team(string name) : name(name) {}
    void addPlayer(Player player)
    {
        players.push_back(player);
    }
    friend int TotalScore(Team);
};
int TotalScore(Team A)
{
    int sum = 0;
    for (auto x : A.players)
    {
        sum += x.score;
    }
    return sum;
}
Team Winnner(vector<Team> Teams)
{
    if (Teams.empty())
    {
        throw runtime_error("No teams provided");
    }

    Team winner = Teams[0];
    int highestScore = TotalScore(winner);

    for (int i = 1; i < Teams.size(); i++)
    {
        int currentScore = TotalScore(Teams[i]);
        if (currentScore > highestScore)
        {
            winner = Teams[i];
            highestScore = currentScore;
        }
    }
    return winner;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int total;
    cout << "how many team do you have ??";
    cin >> total;
    vector<Team> Teams;
    for (int i = 0; i < total; i++)
    {
        string name;
        int size;
        cout << "for team " << i + 1 << endl;
        cout << "Team Name :: ";
        cin >> name;
        Team temp(name);
        Teams.push_back(temp);
        cout << "No. of players ";
        cin >> size;
        while (size--)
        {
            string playername;
            int score;
            cout << "enter player name and score ::: ";
            cin >> playername >> score;
            Player player(playername, score);
            Teams[i].addPlayer(player);
        }
    }
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    Team winner = Winnner(Teams);
    cout << "the winner is " << winner.name;
    return EXIT_SUCCESS;
}