/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 2
 * Write a program that calculates the number of chocolate chips in a customer cookie order. The
user should input the number of cookies they want to order. For every 12 cookies, they receive
one free cookie. Every cookie has 10 chocolate chips. The program should output the number
of dozens, the number of loose cookies, and the number of chocolate chips. The user should
also be prompted if they want to repeat the calculation once complete.
*/

#include <iostream>

const int dozen = 12;

using namespace std;

int main()
{
    int cookies;
    int cookie_dozen;
    int loose;
    int total_dozen;
    int total_loose;
    int chips;
    string repeat;
    bool loop = true;

    while (loop)
    {
        cout << "Enter the number of cookies you want to order: ";
        cin >> cookies;

        cookie_dozen = cookies / dozen;
        loose = cookies % dozen;
        total_dozen = (cookies + cookie_dozen) / dozen;
        total_loose = (cookies + cookie_dozen) % dozen;
        chips = (cookies + cookie_dozen) * 10;

        cout << "That comes up to " << cookie_dozen << " dozen cookies and " << loose << " loose cookie(s).\n";

        if (cookies >= 12)
        {
            cout << "You also recieve " << cookie_dozen << " free cookies, one per dozen.\n";
        }

        cout << "Your total comes up to " << total_dozen << " dozen cookies and " << total_loose << " loose cookie(s)\n";
        cout << "There is a total of " << chips << " chocolate chips\n";

        cout << endl
             << "Would you like to repeat this calculation (y or n): ";
        cin >> repeat;
        if (repeat == "n")
        {
            loop = false;
        }
    }
}