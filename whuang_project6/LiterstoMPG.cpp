/**
 * @file LiterstoMPG.cpp
 * @author William Huang
 * @brief project 6
 * @version 0.1
 * @date 2025-10-22
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

const double litertogal = .264172;

double mpgCalculator(double liters, double miles);

using namespace std;

int main()
{
    double liters1;
    double miles1;
    double liters2;
    double miles2;
    bool loop = true;
    string yorn;

    while (loop)
    {
        cout << "Enter the information for Car 1\n";
        cout << "Liters: ";
        cin >> liters1;
        cout << "Miles: ";
        cin >> miles1;

        cout << "Enter the information for Car 2\n";
        cout << "Liters: ";
        cin >> liters2;
        cout << "Miles: ";
        cin >> miles2;

        cout << "MPG 1: " << mpgCalculator(liters1, miles1);
        cout << endl
             << "MPG 2: " << mpgCalculator(liters2, miles2) << endl;
        if (mpgCalculator(liters1, miles1) >= mpgCalculator(liters2, miles2))
        {
            cout << "Car 1 has better mileage\n";
        }
        else
            cout << "Car 2 has better mileage\n";

        cout << "Would you like to continue the calculation (y or n)?\n";
        cin >> yorn;

        if (yorn == "n")
        {
            loop = false;
        }
    }
}

double mpgCalculator(double liters, double miles)
{
    double gallons = liters * litertogal;
    return miles / gallons;
}