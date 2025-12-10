/**
 * @file VirtualPetSimulator.cpp
 * @author William Huang
 * @brief Virtual Pet Simulator
 * @version 1.0
 * @date 2025-12-10
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

void feed(int choice);
void play(int choice);
void clean(int choice);
void talk();
int mood();
void Time(int amount);

int hunger = 20;
int happy = 20;
int day = 0;
int cleanStat = 20;
bool sick = false;

int gains[3] = {0, 0, 0};

using namespace std;

int main()
{
    bool alive = true;
    int input;
    string action;

    srand(time(NULL));

    while (alive)
    {

        if (hunger <= 0)
        {
            cout << "Your pet has starved. :(" << endl;
            cout << "Your pet survived: " << day << " days" << endl;
            break;
        }

        if (happy <= 0)
        {
            cout << "Your pet has run away. You're a bad owner >:(" << endl;
            cout << "Your pet survived: " << day << " days" << endl;
            break;
        }

        if (cleanStat <= 0 && !sick)
        {
            cout << "Your pet has become sick due to low cleanliness!\n";
            sick = true;
        }

        if (sick)
        {
            int death = rand() % 2;
            if (death == 0)
            {
                cout << "Your pet was too sick and passed away...\n";
                cout << "Your pet survived: " << day << " days" << endl;
                break;
            }
            else
            {
                cout << "Your pet survived this turn while sick...\n";
            }
        }

        cout << "\nThis is your virtual pet" << endl;
        cout << "DAY " << day + 1 << endl;

        cout << " /\\_/\\ " << endl;
        cout << "( o.o )" << endl;
        cout << " > ^ < " << endl;

        cout << "\nHunger: " << hunger << endl;
        cout << "Happiness: " << happy << endl;
        cout << "Cleanliness: " << cleanStat << endl;

        cout << "\n(feed) to increase hunger." << endl;
        cout << "(play) to increase happiness." << endl;
        cout << "(clean) to clean your pet.\n";
        cout << "(talk) to get a status report." << endl;

        cout << "\nWhat would you like to do today?\n";
        cin >> action;

        if (action == "feed")
        {
            cout << "What would you like to feed your pet?\n";
            cout << "(1) Basic Dry food\n";
            cout << "(2) Premium Salmon\n";

            cin >> input;

            if (input > 2 || input < 0)
            {
                cout << "Invalid Input try again.\n";
                cin >> input;
            }

            feed(input);

            Time(1);
        }

        else if (action == "play")
        {
            cout << "What would you like to play with your pet?\n";
            cout << "(1) 1 Hour of Play\n";
            cout << "(2) Full Day Fun!\n";
            cin >> input;

            if (input > 2 || input < 0)
            {
                cout << "Invalid Input try again.\n";
                cin >> input;
            }

            play(input);

            Time(1);
        }

        else if (action == "clean")
        {
            cout << "How would you like to clean your pet?\n";
            cout << "(1) 10 Second rinse\n";
            cout << "(2) DEEP Clean\n";

            cin >> input;

            if (input > 2 || input < 0)
            {
                cout << "Invalid Input try again.\n";
                cin >> input;
            }

            clean(input);

            Time(1);
        }

        else if (action == "talk")
        {
            talk();
            Time(1);
        }

        // Cure sickness if cleanliness restored
        if (sick && cleanStat > 0)
        {
            sick = false;
            cout << "Your pet has recovered from sickness!\n";
        }

        // Old age
        if (day >= 40)
        {
            cout << "Your pet has died of old age. You were a good owner.\n";
            break;
        }
    }
}

void feed(int choice)
{
    int hungerGain = rand() % 10 + 1;

    if (choice == 2)
    {
        if (hungerGain < 7)
        {
            gains[0] = 4;
            hunger += gains[0];
        }

        else
        {
            gains[0] = 3;
            hunger += gains[0];
        }
    }
    else
    {
        if (hungerGain <= 7)
        {
            gains[0] = 2;
            hunger += gains[0];
        }
        else
        {
            gains[0] = 1;
            hunger += gains[0];
        }
    }

    if (hunger > 20)
    {
        hunger = 20;
    }
    if (hunger >= 20)
    {
        cout << "Your pet is FULL." << endl;
    }
}

void play(int choice)
{
    int happyGain = rand() % 10 + 1;

    if (choice == 2)
    {
        if (happyGain < 7)
        {
            gains[1] = 4;
            happy += gains[1];
        }
        else
        {
            gains[1] = 3;
            happy += gains[1];
        }
    }
    else
    {
        if (happyGain <= 7)
        {
            gains[1] = 2;
            happy += gains[1];
        }
        else
        {
            gains[1] = 1;
            happy += gains[1];
        }
    }

    if (happy > 20)
    {
        happy = 20;
    }

    if (happy >= 20)
    {
        cout << "Your pet has reached MAXIMUM happiness." << endl;
    }
}

void clean(int choice)
{
    int cleanGain = rand() % 10 + 1;

    if (choice == 2)
    {
        if (cleanGain < 7)
        {
            gains[2] = 4;
            cleanStat += gains[2];
        }
        else
        {
            gains[2] = 3;
            cleanStat += gains[2];
        }
    }
    else
    {
        if (cleanGain <= 7)
        {
            gains[2] = 2;
            cleanStat += gains[2];
        }
        else
        {
            gains[2] = 1;
            cleanStat += gains[2];
        }
    }

    if (cleanStat > 20)
    {
        cleanStat = 20;
    }
    if (cleanStat >= 20)
    {
        cout << "Your pet is SUPER clean." << endl;
    }
}

void talk()
{
    cout << "Cat says: \n";
    int moodNum = mood();

    // mood check
    if (moodNum > 16)
        cout << "I am HAPPY\n";
    else if (moodNum >= 11)
        cout << "I am OKAY\n";
    else if (moodNum >= 6)
        cout << "I am FRUSTRATED\n";
    else
        cout << "I am MAD!!!\n";

    // hunger check
    if (hunger > 16)
        cout << "I am FULL\n";
    else if (hunger >= 11)
        cout << "I am NOT HUNGRY.\n";
    else if (hunger >= 6)
        cout << "I am SOMEWHAT HUNGRY\n";
    else
        cout << "I am HUNGRY.\n";

    // happiness check
    if (happy > 16)
        cout << "I am HAPPY\n";
    else if (happy >= 11)
        cout << "I am OKAY.\n";
    else if (happy >= 6)
        cout << "I am CONTENT\n";
    else
        cout << "I am UNHAPPY.\n";

    // clean check
    if (cleanStat > 16)
        cout << "I am CLEAN\n";
    else if (cleanStat >= 11)
        cout << "I am KIND OF CLEAN.\n";
    else if (cleanStat >= 6)
        cout << "I am KIND OF SMELLY\n";
    else
        cout << "I am SMELLY.\n";
}

int mood()
{
    int moodInfo[3] = {hunger, cleanStat, happy};
    return (moodInfo[0] + moodInfo[1] + moodInfo[2]) / 3;
}

void Time(int amount)
{
    day += amount;
    hunger -= (rand() % 2 + 1);
    happy -= (rand() % 2 + 1);
    cleanStat -= (rand() % 2 + 1);
}
