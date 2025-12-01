/**
 * @file VirtualPetSimulator.cpp
 * @author William Huang
 * @brief Virtual Pet Simulator
 * @version 1.0
 * @date 2025-11-07
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <cstdlib>

void feed();
void play();

int hunger = 10;
int happy = 10;
int age = 0;

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
                cout << "Your pet has run away. You're a bad owner >:(" << endl;
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

            // hunger check
            if (hunger <= 6)
            {
                cout << "I am SOMEWHAT hungry\n";
            }
            else if (hunger <= 3)
            {
                cout << "I am HUNGRY.\n";
            }
            else
            {
                cout << "I am NOT hungry.\n";
            }

            // happiness check
            if (happy <= 6)
            {
                cout << "I am CONTENT\n";
            }
            if (happy <= 3)
            {
                cout << "I am SAD.\n";
            }
            else
            {
                cout << "I am quite HAPPY.\n";
            }
        }
        if (day > 20)
        {
            cout << "Your pet has died of old age. You were a good owner.\n";
            break;
        }
    }
}

// 40% +1, 30% +2, 20% +3, 10% +1 hunger
void feed()
{
    int hungerGain = rand() % 10 + 1;

    if (hunger >= 10)
    {
        hunger = 10;
        cout << "Your pet is FULL." << endl;
    }
    else if (hungerGain <= 4)
    {
        if (hunger + 1 >= 10)
        {
            hunger = 10;
        }
        else
            hunger++;
    }
    else if (hungerGain <= 7)
    {
        if (hunger + 2 >= 10)
        {
            hunger = 10;
        }
        else
            hunger += 2;
    }
    else if (hungerGain <= 9)
    {
        if (hunger + 3 >= 10)
        {
            hunger = 10;
        }
        else
            hunger += 3;
    }
    else
    {
        if (hunger + 4 >= 10)
        {
            hunger = 10;
        }
        else
            hunger += 4;
    }
}

// 40% +1, 30% +2, 20% +3, 10% +4 happiness
void play()
{
    int happyGain = (rand() % 10) + 1;
    if (happy >= 10)
    {
        happy = 10;
        cout << "Your pet has reached MAXIMUM happiness." << endl;
    }
    else if (happyGain <= 4)
    {
        if (happy + 1 >= 10)
        {
            happy = 10;
        }
        else
            happy++;
    }
    else if (happyGain <= 7)
    {
        if (happy + 2 >= 10)
        {
            happy = 10;
        }
        else
            happy += 2;
    }
    else if (happyGain <= 9)
    {
        if (happy + 3 >= 10)
        {
            happy = 10;
        }
        else
            happy += 3;
    }
    else
    {
        if (happy + 4 >= 10)
        {
            happy = 10;
        }
        else
            happy += 4;
    }
}