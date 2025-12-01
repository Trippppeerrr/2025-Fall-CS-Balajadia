/**
 * @file whuang_project1.cpp
 * @author William Huang
 * @brief project 1
 * @version 0.1
 * @date 2025-09-10
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using namespace std;

int main()
{
    // declaration of all variables
    string firstName, secondName, fruit, color, shape;
    int num;
    double decimal;

    // prompts the user for information and initializes it to the respective variable
    cout << "Enter a Name: ";
    cin >> firstName;
    cout << "Enter another Name: ";
    cin >> secondName;
    cout << "Enter a fruit: ";
    cin >> fruit;
    cout << "Enter a color: ";
    cin >> color;
    cout << "Enter a shape: ";
    cin >> shape;
    cout << "Enter a Number between 1 - 100: ";
    cin >> num;
    cout << "Enter a Decimal between 0 and 1: ";
    cin >> decimal;

    // displays the madlib
    cout << "One day, " << firstName << "and " << secondName << " found a giant " << shape << " in the forest. \n";
    cout << "On it was written : “Bring me " << num << " " << color << " " << fruit << ", balanced to exactly " << decimal << " grams. \n";
    cout << "They hurried off, and when they returned, the " << shape << " opened to reveal endless glowing " << color << " " << fruit << ".\nThe end.";
}
