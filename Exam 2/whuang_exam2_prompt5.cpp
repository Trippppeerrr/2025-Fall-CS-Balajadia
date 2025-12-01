/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 5
 * Prompt 5
Imagine there is a vending machine capable of automatically deep frying churros. Write
a program to simulate the vending machine. It costs $5.50 to buy a churro, and the machine
only takes coins in denominations of a dollar, half-dollar, quarter, dime, or nickel. Write code to
simulate a person putting money into the vending machine by repeatedly prompting the user for
the next coin to be inserted. Output the total entered so far when each coin is inserted. When
$5.50 or more is added, the program should output “Enjoy your churro!” along with any change
that should be returned. Use top-down design to determine appropriate functions for the
program.
*/

#include <iostream>
#include <iomanip>

void coinChange(double change, int &dollar, int &halfDollar, int &quarters, int &dime, int &nickel);

const double churro = 5.5;

int main()
{
    using namespace std;

    int dollar = 0, halfDollar = 0, quarters = 0, dime = 0, nickel = 0;
    double total = 0, change;
    string coin;
    bool loop = true;

    cout << fixed << showpoint;
    cout << setprecision(2);

    while (loop)
    {
        cout << "Churro: $5.50 \n";
        cout << "Total: $" << total;

        cout << "\n(do) Dollar\n(h) Half Dollar\n(q) Quarter\n(d) Dime\n(n) Nickel\n";
        cout << "Enter coins: \n";
        cin >> coin;

        if (coin == "do")
        {
            total += 1.00;
        }
        else if (coin == "h")
        {
            total += .5;
        }
        else if (coin == "q")
        {
            total += .25;
        }
        else if (coin == "d")
        {
            total += .1;
        }
        else if (coin == "n")
        {
            total += .05;
        }
        else
        {
            cout << "Enter a valid coin\n";
        }

        if (total >= churro)
        {

            loop = false;
        }
    }
    cout << "Enjoy your churro!\n";
    change = total - churro;
    coinChange(change, dollar, halfDollar, quarters, dime, nickel);
    if (change > 0)
    {
        cout << "Your change is: " << change << endl;

        cout << "You recieved " << dollar << " dollars, " << halfDollar << " half-dollars, " << quarters << " quarters, " << dime << " dimes, " << nickel << " nickels.\n";
    }
}

void coinChange(double change, int &dollar, int &halfDollar, int &quarters, int &dime, int &nickel)
{
    if (change >= 1)
    {
        dollar = change / 1;
        change -= dollar * 1.0;
    }
    if (change >= .5)
    {
        halfDollar = change / .5;
        change -= halfDollar * .5;
    }
    if (change >= .25)
    {
        quarters = change / .25;
        change -= quarters * .25;
    }
    if (change >= .1)
    {
        dime = change / .1;
        change -= dime * .1;
    }
    if (change >= .05)
    {
        nickel = change / .05;
        change -= nickel * .05;
    }
}