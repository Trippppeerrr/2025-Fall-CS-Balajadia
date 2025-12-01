/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 6
 * Prompt 6
Write a soccer game simulator. Your simulator should function as follows:
● A random number generator should generate a number giving the number of events in a
game. This value should be between 1 and 15.
● Your program should then generate this number of events. For each event, you should
generate a random number between 1 and 6.
○ If the number now generated is 1, then the first team has scored a goal.
○ If it is 2, then the second team has scored a goal.
○ If the number is 3, the first team has committed an offside, and
○ If it is a 4 then the second team has committed an offside.
○ If the number is 5, the first team gets a penalty, and
○ if it is 6, the second team gets a penalty.
■ To decide the outcome of the penalty, your program should generate
another random number between 1 and 4.
● If this number is 1, the team scores from the penalty,
● if it is 2, they miss the penalty.
● A 3 means they get a yellow card, and
● A 4 means a red card for the team.
For each event generated, your program should output a statement giving a commentary on
that event, such as “Team 1 scored a goal”. At the end of the program, you should print out the
final score of the game. At the start of your main function seed the random number generator
with the current time using the command srand(time(NULL));
*/

#include <iostream>
#include <cmath>
#include <random>
#include <ctime>

void penalty(int &score, int team);

int main()
{
    using namespace std;
    srand(time(NULL));

    int events = (rand() % 15) + 1;

    int event;

    int team1 = 0, team2 = 0;

    cout << "There will be " << events << " events\n";

    for (int i = 0; i < events; i++)
    {
        event = (rand() % 6) + 1;

        if (event == 1)
        {
            team1++;
            cout << "Team 1 has scored a goal!\n";
        }
        else if (event == 2)
        {
            team2++;
            cout << "Team 2 has scored a goal!\n";
        }
        else if (event == 3)
        {
            cout << "Oh No! Team 1 has commited an offside!\n";
        }
        else if (event == 4)
        {
            cout << "Oh No! Team 2 has commited an offside!\n";
        }
        else if (event == 5)
        {
            cout << "Team 1 gets a penalty kick!\n";
            penalty(team1, 1);
        }
        else
        {
            cout << "Team 2 gets a penalty kick!\n";
            penalty(team2, 2);
        }
    }
    cout << "Team 1 scored " << team1 << " goals!\nTeam 2 scored " << team2 << " goals!\n";
    if (team1 == team2)
    {
        cout << "Its a TIE!";
    }
    else if (team1 > team2)
    {
        cout << "Team 1 takes the WIN!";
    }
    else
    {
        cout << "Team 2 takes the WIN!";
    }
}

void penalty(int &score, int team)
{
    int penaltyOutcome;
    penaltyOutcome = (rand() % 4) + 1;
    if (penaltyOutcome == 1)
    {
        score++;
    }
    else if (penaltyOutcome == 2)
    {
        std::cout << "Yikes! Team" << team << " has missed the penalty kick!\n";
    }
    else if (penaltyOutcome == 3)
    {
        std::cout << "Unfortunate! Team" << team << " got a YELLOW card!\n";
    }
    else
    {
        std::cout << "Blunder! Team " << team << " got a RED card!\n";
    }
}