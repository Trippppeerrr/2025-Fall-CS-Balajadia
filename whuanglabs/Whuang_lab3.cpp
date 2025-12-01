/**
 * @file whuang_lab3.cpp
 * @author William Huang
 * @brief project 1
 * @version 0.1
 * @date 2025-09-15
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int number;

    // prompt user for information
    cout << "input an integer: ";
    cin >> number;

    // if statements to determine even or odd or zero
    if (number == 0)
    {
        cout << "The entered number is zero, a little addition to the number system from our friends in Arabia\n";
    }
    else if (number % 2 == 0)
    {
        cout << "The number is even\n";
    }
    else
    {
        cout << "The number is odd\n";
    }
}