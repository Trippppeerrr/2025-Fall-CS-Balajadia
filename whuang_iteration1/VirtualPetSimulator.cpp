/**
 * @file VirtualPetSimulator.cpp
 * @author William Huang
 * @brief Virtual Pet Simulator
 * @version 1.0
 * @date 2025-10-09
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <cstdlib>

void feed();
void play();

int hunger = 5;
int happy = 5;

using namespace std;

int main()
{
    bool alive = true;
    int day = 0;
    string action;

    while (alive)
    {
        if (hunger <= 0 || happy <= 0)
        {
            if (hunger == 0)
            {
                cout << "Your pet has starved. :(" << endl;
            }
            else
            {
                cout << "Your pet has died of depresssion. :(" << endl;
            }
            cout << "Your pet survived: " << day << " days" << endl;
            break;
        }

        cout << "This is your virtual pet" << endl;
        cout << "DAY " << day + 1 << endl;

        // I had chatgpt to generate this cat in ACII
        cout << " /\\_/\\ " << endl;
        cout << "( o.o )" << endl;
        cout << " > ^ < " << endl;

        cout << endl
             << "Hunger: " << hunger << endl;
        cout << "Happiness: " << happy;

        cout << endl
             << "(feed) to increase hunger" << endl;
        cout << "(play) to increase happiness." << endl;
        cout << "(talk) to get a status report.";

        cout << endl
             << "What would you like to do today?" << endl;
        cin >> action;

        if (action == "feed")
        {
            feed();
            day++;
            happy -= (rand() % 2 + 1);
        }
        if (action == "play")
        {
            play();
            day++;
            hunger -= (rand() % 2 + 1);
        }
        if (action == "talk")
        {
            cout << "Cat says: \n";
            if (hunger <= 2)
            {
                cout << "I am HUNGRY.\n";
            }
            else
            {
                cout << "I am not hungry.\n";
            }
            if (happy <= 2)
            {
                cout << "I am SAD.\n";
            }
            else
            {
                cout << "I am quite happy.\n";
            }
        }
    }
}

void feed()
{
    if (hunger >= 5)
    {
        hunger = 5;
        cout << "Your pet is FULL." << endl;
    }
    else if ((rand() % 10 + 1) <= 7)
    {
        hunger++;
    }
    else
    {
        if (hunger + 2 >= 5)
        {
            hunger = 5;
        }
        else
            hunger += 2;
    }
}

void play()
{
    if (happy >= 5)
    {
        happy = 5;
        cout << "Your pet has reached MAXIMUM happiness." << endl;
    }
    else if ((rand() % 10 + 1) <= 7)
    {
        happy++;
    }
    else if (happy + 2 >= 5)
    {
        happy = 5;
    }
    else
        happy += 2;
}