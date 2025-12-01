/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 7
 * Prompt 7
You have identical prizes to give away and a pool of 25 finalists. The finalists are assigned
numbers from 1 to 25. Write a function to randomly select the number of finalists (between two
and five) to receive a prize and then a function to select finalists themselves. Make sure not to
pick the same number twice. For example, picking four finalists and then the numbers 3, 15, 22,
and 14 would be valid but picking four finalists and 3, 3, 31, and 17 would be invalid because
finalist number 3 is listed twice and 31 is not a valid finalist number.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int contestants();
int winner();

int main()
{
    using namespace std;

    int pastWinner1 = 0;
    int pastWinner2 = -1;
    int pastWinner3 = -2;
    int pastWinner4 = -3;
    int currentWinner = winner();
    int winners = contestants();

    cout << "We will have " << winners << " winners out of 25.\n";

    for (int i = 0; i < winners; i++)
    {

        if (i = 1)
        {
            currentWinner = pastWinner1;
            cout << "Congrats to " << pastWinner1 << " for winning the prize!\n";
        }
        else if (i = 2)
        {
            currentWinner = pastWinner1;
            cout << "Congrats to " << pastWinner2 << " for winning the prize!\n";
        }
        else if (i = 3)
        {
            currentWinner = pastWinner1;
            cout << "Congrats to " << pastWinner3 << " for winning the prize!\n";
        }
        else if (i = 4)
        {
            currentWinner = pastWinner1;
            cout << "Congrats to " << pastWinner4 << " for winning the prize!\n";
        }

        if (currentWinner == pastWinner2 || currentWinner == pastWinner3 || currentWinner == pastWinner4 || currentWinner == pastWinner1)
        {
            currentWinner = winner();
        }
    }
    cout << "Congrats to " << currentWinner << " for winning the prize!";
}

// determines number of winners
int contestants()
{
    srand(time(0));
    int contestant = (rand() % 3) + 2;

    return contestant;
}

// determines which number won
int winner()
{
    srand(time(0));
    int winner = (rand() % 25) + 1;
    return winner;
}