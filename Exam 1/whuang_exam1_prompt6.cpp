/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 6
 * Prompt 6
Write a program that allows the user to enter a number of quarters, dimes, nickels, and
pennies, and then outputs the monetary value of the coins in cents. For example, if the user
enters 2 for the number of quarters, 3 for the number of dimes, 1 for the number of nickels, and
0 for the number of pennies, then the program should output that the coins are worth 85 cents.
NOTE: The output can either be in a decimal form (0.85) or in a sentence (85 cents).
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quarter;
    int dime;
    int nickel;
    int penny;
    double total;

    cout << fixed;
    cout << setprecision(2);

    cout << "Enter the number of quarters: ";
    cin >> quarter;

    cout << "Enter the number of dimes: ";
    cin >> dime;

    cout << "Enter the number of nickels: ";
    cin >> nickel;

    cout << "Enter the number of pennies: ";
    cin >> penny;

    total = (quarter * .25) + (dime * .1) + (nickel * .05) + (penny * .01);

    cout << "Your total is $" << total;
}