/**
 * @file whuang_lab4.cpp
 * @author William Huang
 * @brief
 * @version 0.1
 * @date 2025-09-22
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int firstNum, secondNum;
    int maxValue, minValue;
    int sum = 0;

    // take in user inputs
    cout << "Enter Two Integers: ";
    cin >> firstNum;
    cin >> secondNum;

    // finds highest and lowest values
    if (firstNum > secondNum)
    {
        maxValue = firstNum;
        minValue = secondNum;
    }
    else
    {
        maxValue = secondNum;
        minValue = firstNum;
    }

    // counting up loop and calculates sum at the same time
    cout << "Counting Up: \n";
    for (int i = 0; i < (maxValue - minValue) + 1; i++)
    {
        cout << minValue + i << " ";
        sum += minValue + i;
    }
    cout << endl;

    // counting down loop
    cout << "Counting Down: \n";
    for (int i = 0; i < (maxValue - minValue) + 1; i++)
    {
        cout << maxValue - i << " ";
    }
    cout << endl;

    // takes the sum that was calculated in counting up loop and displays
    cout << "Sum of all consecutive numbers: \n"
         << sum << "\n";

    // checks and displays even numbers
    cout << "Even Numbers: \n";
    for (int i = 0; i < (maxValue - minValue) + 1; i++)
    {
        if ((minValue + i) % 2 == 0)
        {
            cout << minValue + i << " ";
        }
    }
    cout << endl;

    // checks and displays odd numbers
    cout << "Odd Numbers: \n";
    for (int i = 0; i < (maxValue - minValue) + 1; i++)
    {
        if ((minValue + i) % 2 == 1)
        {
            cout << minValue + i << " ";
        }
    }
    cout << endl;
}