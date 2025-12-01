/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 7
 * Prompt 7
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

using namespace std;

string horoscope(int month, int day);

int main()
{
    int month;
    int day;
    bool loop = true;
    string yesNo;

    while (loop)
    {
        cout << "enter your month of birth (1-12): ";
        cin >> month;

        cout << "enter your day of birth (1 - 31): ";
        cin >> day;

        cout << "Your horoscope sign is " << horoscope(month, day) << ".\n";

        cout << "Would you like to repeat the test? (y or n): ";
        cin >> yesNo;

        if (yesNo == "n")
        {
            loop = false;
        }
    }
}

string horoscope(int month, int day)
{
    if (month == 1)
    {
        if (day > 20)
        {
            return "Capicorn";
        }
        else
            return "Aquarius";
    }
    else if (month == 2)
    {
        if (day > 19)
        {
            return "Aquarius";
        }
        else
            return "Pisces";
    }
    else if (month == 3)
    {
        if (day > 21)
        {
            return "Pisces";
        }
        else
            return "Aries";
    }
    else if (month == 4)
    {
        if (day > 20)
        {
            return "Aries";
        }
        else
            return "Taurus";
    }
    else if (month == 5)
    {
        if (day > 21)
        {
            return "Taurus";
        }
        else
            return "Gemini";
    }
    else if (month == 6)
    {
        if (day > 22)
        {
            return "Gemini";
        }
        else
            return "Cancer";
    }
    else if (month == 7)
    {
        if (day > 23)
        {
            return "Cancer";
        }
        else
            return "Leo";
    }
    else if (month == 8)
    {
        if (day > 23)
        {
            return "Leo";
        }
        else
            return "Virgo";
    }
    else if (month == 9)
    {
        if (day > 23)
        {
            return "Virgo";
        }
        else
            return "Libra";
    }
    else if (month == 10)
    {
        if (day > 22)
        {
            return "Libra";
        }
        else
            return "Scorpio";
    }
    else if (month == 11)
    {
        if (day > 22)
        {
            return "Scorpio";
        }
        else
            return "Segittarius";
    }
    else if (month == 12)
    {
        if (day > 22)
        {
            return "Seguttarius";
        }
        else
            return "Capicorn";
    }
    else
        return "";
}