/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 4
 * Prompt 4
Write a program that allows the user to enter an amount of money. The program then
outputs a combination of the number of dollar bills, quarters, dimes, nickels, and pennies for that
amount. For example, if the user enters 85 cents, the program should output that there are 3
quarters and 1 dime. At the end of this, the program asks the user if they would like to repeat
the calculation with a new amount or not.
Your program will use the following function (among others):
void compute_coin(int coin_value, int& number, int& amount_left);
// Precondition: 0 < coin_value < 100; 0 <= amount_left < 100.
// Postcondition: number has been set equal to the maximum number of coins
// denomination coin_value cents that can be obtained from amount_left
// amount_left has been decreased by the value of the coins, that is,
// decreased by number*coin_value.
For example, suppose the value of the variable amount_left is 86. Then, after the
following call, the value of the number will be 3 and the value of amount_left will be 11 (because
if you take 3 quarters from 86 cents, that leaves 11 cents):
compute_coins(25, number, amount_left);
Include a loop that lets the user repeat this computation for new input values until the
user says he or she wants to end the program. Hint: Use integer division and the % operator to
implement this function.
Note, the code must produce the LEAST number of coins (i.e. 85 cents could also be 8
dimes and 1 nickel, but that would be incorrect).*/

#include <iostream>
#include <iomanip>

void compute_coin(int coin_value, int &number, int &amount_left);

int main()
{
    using namespace std;
    cout << fixed << showpoint;
    cout << setprecision(2);
    int money;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    bool loop = true;
    string input;

    while (loop)
    {
        cout << "Enter an amount of money in cents: ";
        cin >> money;
        int cents = money;
        compute_coin(25, quarters, money);
        compute_coin(10, dimes, money);
        compute_coin(05, nickels, money);
        compute_coin(01, pennies, money);
        cout << cents << " cents is " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, " << pennies << " pennies.\n";

        cout << "Would you like to continue (y/n)";
        cin >> input;
        if (input == "n")
        {
            loop = false;
        }
    }
}

void compute_coin(int coin_value, int &number, int &amount_left)
{
    number = amount_left / coin_value;
    amount_left %= coin_value;
}