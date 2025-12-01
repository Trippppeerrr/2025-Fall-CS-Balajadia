/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 9
 * Prompt 9
You have just finished playing various carnival games and have earned some tickets.
The prize counter at your local carnival allows you to exchange the tickets for candy bars or
gumballs. You can redeem 6 tickets for a candy bar or 3 tickets for a gumball. You prefer candy
bars to gumballs. Additionally, every candy bar comes with a ticket inside.
Write a program that defines a variable initially assigned to the number of tickets you
currently have.
Next, the program should output how many candy bars and gumballs you can get if you
spend all of your coupons on candy bars first, and any remaining coupons on gumballs.
Last, your program should take into account how many free tickets have been acquired
from the candy bars, and spend those tickets accordingly with the same preference for candy
bars first and gumballs after.
For example,
● Starting with:
○ Six (6) tickets should yield the result of:
1 candy bar, 0 gumballs, and 1 ticket
○ Nine (9) tickets should yield a result of:
1 candy bar, 1 gumball, and 1 ticket
○ Eighteen (18) tickets should yield the result of:
3 candy bars, 1 gumball, 0 tickets
○ Thirty-six (36) tickets should yield the result of:
7 candy bars, 0 gumballs, 1 ticket

*/

#include <iostream>

using namespace std;

int main()
{
    int initial;
    int tickets;
    int newCandy;
    int candy = 0;
    int gumball = 0;

    cout << "Enter the number of tickets: ";
    cin >> tickets;
    initial = tickets;
    while (tickets >= 6)
    {
        candy += tickets / 6;
        newCandy = tickets / 6;
        tickets += newCandy;
        tickets -= 6 * newCandy;
    }
    if (tickets >= 3)
    {
        gumball = tickets / 3;
        tickets %= 3;
    }
    cout << initial << " tickets should yield the result of:\n";
    cout << candy << " candy bars, " << gumball << " gumballs, and " << tickets << " tickets.";
}