/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 10
 * Prompt 10
Powers of numbers can be calculated by multiplying the number by itself for as many
times as the value of the exponent. For example, 2 raised to power 4 can be calculated by
multiplying 2 by itself 4 times to get 16.
Write a program that:
● inputs a double as the base number and an int as the exponent;
● multiplies the base number by itself using a loop that repeats for the number of times in
the int;
● outputs the exponential value calculated.
Use an if statement for the special case where the output is 1 if the int value is 0.
*/

#include <iostream>
#include <iomanip>

const double monthlyInterest = 1.015;

using namespace std;
int main()
{
    double debt = 1000;
    double total = 0;
    int months = 0;

    cout << fixed;
    cout << setprecision(2);

    while (debt > 0)
    {
        debt *= monthlyInterest;
        if (debt <= 50)
        {
            total += 50 - 2.17;
            debt = 0;
        }
        else
        {
            debt -= 50;
            total += 50;
        }

        months++;
        cout << "Month " << months << " your remaining debt is $" << debt << " " << endl;
    }

    cout << "Congrats! You have paid off your debts. It took you " << months << " months and a total of $" << total - 1000 << " in interest.";
}