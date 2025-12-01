/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 1
 * Write a program that calculates the total grade for N classroom exercises as a percentage. The
user should input the value for N followed by each of the N scores and totals. Calculate the
overall percentage (sum of the total points earned divided by the total points possible) and
output it as a percentage.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int exercises;
    double total = 0;
    int score = 0;
    int point;
    double percent;

    cout << "How many exercises to input? ";
    cin >> exercises;

    for (int i = 0; i < exercises; i++)
    {
        cout << endl
             << "Total points possible for exercise " << i + 1 << ": ";
        cin >> point;
        total += point;

        cout << "Score recieved for exercise " << i + 1 << ": ";
        cin >> point;
        score += point;
    }

    percent = (score / total) * 100;

    cout << fixed;
    cout << setprecision(2);

    cout << endl
         << "Your total is " << score << " out of " << total << ", or " << percent << "%.";
}