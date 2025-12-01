/**
 * @file whuang_lab0.cpp
 * @author William Huang
 * @brief Lab 1
 * @version 0.1
 * @date 2025-09-3
 *
 * @copyright Copyright (c) 2025
 *
 */

/*
* Rewrite the following program so that it is properly formatted.
* Add comments to identify at least one of each: variable(s), declaration(s), and
assignment statement(s).
*
* Add any other comments to the code that would make it easier for
* someone with no prior experience to understand.
*/
// Main function of the C++ program.
#include <iostream>
#include <string>

// variables are declared and assigned values or strings
const double X = 13.45;
const int Y = 34;
const char BLANK = ' ';

int main()
{
    using namespace std;

    string firstName, lastName;
    int num;
    double salary;

    // variables are assigned characters based on user input
    cout << "Enter first name: ";
    cin >> firstName;
    cout << endl;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << endl;

    cout << "Enter a positive integer less than 70:";
    cin >> num;
    cout << endl;
    // assignment statement plus an operation being calculated
    salary = num * X;
    // results are displayed
    cout << "Name: " << firstName << BLANK << lastName << endl;
    cout << "Wages: $" << salary << endl;
    cout << "X = " << X << endl;
    cout << "X+Y = " << X + Y << endl;

    return 0;
}
