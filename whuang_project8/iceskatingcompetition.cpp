/**
 * @file iceskatingcompetition.cpp
 * @author William Huang
 * @brief project 8
 * @version 0.1
 * @date 2025-11-17
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;

    double num[5];
    int skaters;
    double total;
    double avg;

    cout << "How many skaters do you want to input scores for? ";
    cin >> skaters;

    for (int j = 0; j < skaters; j++)
    {
        cout << "Please enter five (5) scores from 0.25 to 10.00, in increments of 0.25\n";

        for (int i = 0; i < 5; i++)
        {
            cin >> num[i];
            int temp = num[i] * 100;
            if (temp % 25 != 0 || num[i] > 10 || num[i] < .25)
            {
                cout << "This is not a valid score; enter another score.\n";
                i--;
            }
            else
            {
                total += num[i];
            }
        }
        cout << fixed << showpoint;
        cout << setprecision(2);
        avg = total / 5;
        cout << "Skater " << j << "'s total/average is: " << total << ", " << avg << endl;
    }
}