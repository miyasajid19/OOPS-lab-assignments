#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Mission;
class Agent
{
protected:
    string name;
    string code;
    static int ActiveCount;
    bool status;

public:
    Agent()
    {
        ActiveCount++;
        status = true;
    }
    Agent(string name) : name(name)
    {
        ActiveCount++;
        status = true;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setMission(string code)
    {
        this->code = code;
        this->status = false;
    }
    int active()
    {
        return ActiveCount;
    }
    bool isActive()
    {
        return this->status == true;
    }
    void display()
    {

        cout << this->name << "\t" << this->status << endl;
    }
    friend bool Match(Agent, Mission);
};
int Agent ::ActiveCount = 0;
class Mission
{
    string code;

public:
    Mission(string code) : code(code) {}
    void displayActiveAgents(Agent arr[])
    {
        for (int i = 0; i < arr[0].active(); i++)
        {
            if (arr[i].isActive())
            {
                cout << i + 1 << "\t";
                arr[i].display();
            }
        }
    }
    void assignMission(Agent arr[])
    {
        displayActiveAgents(arr);
        cout << "chose active agents";
        string agent;
        int id;
        cin >> id;
        if (arr[id - 1].isActive())
        {
            arr[id - 1].setMission(this->code);
        }
        else
        {
            cout << "Invalid input" << endl;
            assignMission(arr);
        }
    }
    friend bool Match(Agent, Mission);
};
class spyMission : public Mission
{
private:
    string name;

public:
    spyMission(string name, string code) : name(name), Mission(code) {}
};
bool Match(Agent agent, Mission mission)
{
    return agent.code == mission.code;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << "enter how many agents do you have??" << endl;
    int num;
    cin >> num;
    cout << boolalpha;
    Agent *arr = new Agent[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter name of agent " << i + 1;
        string name;
        cin >> name;
        arr[i].setName(name);
    }
    spyMission mission("go to hell", "021neb432");
    mission.assignMission(arr);
    cout << endl;
    cout << Match(arr[0], mission);
    return EXIT_SUCCESS;
}