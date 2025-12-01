/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 4
 * Write a program that asks for the user’s height, weight, and age, and then computes clothing
sizes according to the following formulas.
● Hat size - weight in pounds divided by height in inches and all that multiplied by 2.9.
● Jacket size (chest in inches) = height times weight divided by 288 and then adjusted by
adding one-eighth of an inch for each 10 years over age 30.
(Note: The adjustment only takes place after a full 10 years. So, there is no adjustment
for ages 30 through 39, but one-eighth of an inch is added for age 40.)
● Waist in inches = weight divided by 5.7 and then adjusted by adding one-tenth of an inch
for each 2 years over age 28.
(Note: The adjustment only takes place after a full 2 years. So, there is no adjustment for
age 29, but one-tenth of an inch is added for age 30.)
Your program should allow the user to repeat this calculation as often as he/she/they wish(es).
Disclaimer: this is not an accurate way to obtain clothes sizes and is solely for usage in an
academic context.
*/

#include <iostream>

using namespace std;

int main()
{
    double height;
    double weight;
    int age;
    bool loop = true;
    double hatSize;
    double jacketSize;
    double waist;
    string yesno;

    while (loop)
    {
        cout << "\nEnter your height in inches: ";
        cin >> height;

        cout << "Enter your weight in pounds: ";
        cin >> weight;

        cout << "Enter your age: ";
        cin >> age;

        hatSize = (weight / height) * 2.9;

        jacketSize = (height * weight) / 288;
        if (age > 30)
        {
            jacketSize += ((age / 10) - 3) * (1 / 8);
        }

        waist = weight / 5.7;
        if (age > 28)
        {
            waist += ((age / 2) - 14) * 0.1;
        }

        cout << "Your hat size is " << hatSize << ".\n";
        cout << "Your jacket size is " << jacketSize << " inches.\n";
        cout << "Your waist is " << waist << " inches.";

        cout << endl
             << "Would you like to repeat the calculation (y or n): ";
        cin >> yesno;

        if (yesno == "n")
        {
            loop = false;
        }
    }
}