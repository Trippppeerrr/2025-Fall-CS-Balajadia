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

using namespace std;

int main()
{
    double num;
    int exponent;
    double result;

    cout << "Enter a number as the base: ";
    cin >> num;
    cout << "Enter an integer as the exponent: ";
    cin >> exponent;

    result = num;

    if (exponent == 0)
    {
        cout << num << " to the power of 0 equals 1";
    }
    else
    {
        for (int i = 1; i < exponent; i++)
        {
            result *= num;
        }

        cout << num << " to the power of " << exponent << " equals " << result;
    }
}