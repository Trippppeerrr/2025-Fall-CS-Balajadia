/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 5
 * Prompt 5
Write a program to compute the interest due, the total amount due, and the minimum
payment for a revolving credit account. The program accepts the account balance as input, then
adds on the interest to get the total amount due. The rate schedules are the following:
The interest is 1.5 percent on the first $1,000 and 1 percent on any amount over that.
The minimum payment is the total amount due if that is $10 or less; otherwise, it is $10 or 10
percent of the total amount owed, whichever is larger.
Your program should include a loop that lets the user repeat this calculation until the
user says they are done.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double balance;
    double interest;
    double total;
    double minPayment;
    bool loop = true;
    string yesno;

    cout << fixed;
    cout << setprecision(2);

    while (loop)
    {
        cout << "Enter your account balance: ";
        cin >> balance;

        if (balance <= 1000)
        {
            interest = 0.015;
        }
        else
            interest = .01;

        // Need MORE CLARIFICATION PLSEAERLWKSNETKLNESKT ASK IN CLASS TMR
        total = (balance * interest);

        if (total <= 10)
        {
            cout << "Your minimum payment is $" << total << ".\n";
        }
        else if (total * .1 >= 10)
        {
            cout << "Your miminum payment is $" << total * .1 << ".\n";
        }
        else
        {
            cout << "Your minimum payment is $10.\n";
        }

        cout << "Do you wish to repeat the calculation (y or n): ";
        cin >> yesno;

        if (yesno == "n")
        {
            loop = false;
        }
    }
}