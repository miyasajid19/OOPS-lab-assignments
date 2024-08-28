/*
Create a program to model a sports team where each player has a score
Use a friend function to calculate the total score of the team by calculating private data of each player
And compare scores of 2 teams
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Team
{
    string name;
    int size;
    int *scores;

public:
    Team(string name, int size)
    {
        this->name = name;
        this->size = size;
        scores = new int[size]();
    }
    void setScores()
    {
        int score;
        cout << "For Team " << this->name << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "score of player " << i + 1 << "     :::   ";
            cin >> scores[i];
        }
    }
    friend string Check(Team, Team);
};
string Check(Team A, Team B)
{
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < A.size; i++)
    {
        sum1 += A.scores[i];
    }
    for (int i = 0; i < B.size; i++)
    {
        sum2 += B.scores[i];
    }
    cout << "Team " << A.name << " has scored " << sum1 << endl;
    cout << "Team " << B.name << " has scored " << sum2 << endl;
    return ((sum1 < sum2) ? B.name : A.name);
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    Team first("sajid", 5);
    first.setScores();
    Team second("pramisha", 5);
    second.setScores();
    cout << endl
         << endl
         << Check(first, second) << "is the winner";
    return EXIT_SUCCESS;
}
