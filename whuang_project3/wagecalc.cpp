/**
 * @file whuang_project3.cpp
 * @author William Huang
 * @brief project 3
 * @version 1.0
 * @date 2025-09-10
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

const double FEDERAL_INCOME_TAX = 0.22;
const double SOCIAL_SECURITY_TAX = 0.062;
const double MEDICAID_TAX = 0.0145;
double STATE_TAX;

void CA(int pay);
void FL(int pay);

int main()
{
    // create variables
    double grossPay;

    double pension_plan;
    double healthInsurance = 0, dentalInsurance = 0, visionInsurance = 0;
    string input;
    string state;
    int yRn;
    double total;
    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "Enter gross yearly pay: ";
    cin >> grossPay;

    cout << "Enter your state (CA or FL): ";
    cin >> state;

    if (state == "FL")
    {
        FL(grossPay);
    }
    else
    {
        CA(grossPay);
    }

    cout << "\nEnter Pension Plan percentage (0 - 15): ";
    cin >> pension_plan;
    pension_plan /= 100;

    cout << "\nWould you like to opt-in for health insurance? (respond in uppercase Y or N): ";
    cin >> input;

    if (input == "Y")
    {
        cout << "\nSelf (1) or Self with others (2): ";
        cin >> yRn;
        if (yRn == 1)
        {
            healthInsurance = 0.0;
        }
        else
        {
            healthInsurance = 251.63;
        }
    }

    cout << "\nWould you like to opt-in for dental insurance? (respond in uppercase Y or N): ";
    cin >> input;

    if (input == "Y")
    {
        cout << "\nSelf (1) or Self with others (2): ";
        cin >> yRn;
        if (yRn == 1)
        {
            dentalInsurance = 17.58;
        }
        else
        {
            dentalInsurance = 70.88;
        }
    }

    cout << "\nWould you like to opt-in for vision insurance? (respond in uppercase Y or N): ";
    cin >> input;

    if (input == "Y")
    {
        cout << "\nSelf (1) or Self with others (2): ";
        cin >> yRn;
        if (yRn == 1)
        {
            visionInsurance = 0.0;
        }
        else
        {
            visionInsurance = 5.61;
        }
    }

    // calculating deduction
    double federalAmount = FEDERAL_INCOME_TAX * grossPay;
    cout << "Federal Deduction: $" << federalAmount << endl;
    double stateAmount = STATE_TAX * grossPay;
    cout << "State Deduction: $" << stateAmount << endl;
    double socialAmount = SOCIAL_SECURITY_TAX * grossPay;
    cout << "Social Security Deduction: $" << socialAmount << endl;
    double medicalAmount = MEDICAID_TAX * grossPay;
    cout << "Medicare/Medicaid Deduction: $" << medicalAmount << endl;
    double retireAmount = pension_plan * grossPay;
    cout << "Pension Deduction: $" << retireAmount << endl;

    total = grossPay - federalAmount - stateAmount - socialAmount - medicalAmount - retireAmount - (dentalInsurance * 12) - (visionInsurance * 12) - (healthInsurance * 12);

    cout << "Yearly Pay after all deductions: $" << total << endl;
    cout << "Monthly Pay after all deductions: $" << total / 12 << endl;
}

void CA(int pay)
{
    if (pay >= 1000000)
    {
        STATE_TAX = .133;
    }
    else if (pay >= 572981)
    {
        STATE_TAX = .123;
    }
    else if (pay >= 343789)
    {
        STATE_TAX = .113;
    }
    else if (pay >= 286493)
    {
        STATE_TAX = .103;
    }
    else if (pay >= 56086)
    {
        STATE_TAX = .093;
    }
    else if (pay >= 44378)
    {
        STATE_TAX = .08;
    }
    else if (pay >= 31970)
    {
        STATE_TAX = .06;
    }
    else if (pay >= 20256)
    {
        STATE_TAX = .04;
    }
    else if (pay >= 8545)
    {
        STATE_TAX = .02;
    }
    else
    {
        STATE_TAX = .01;
    }
}

void FL(int pay)
{
    if (pay >= 626350)
    {
        STATE_TAX = .37;
    }
    else if (pay >= 250525)
    {
        STATE_TAX = .35;
    }
    else if (pay >= 197300)
    {
        STATE_TAX = .32;
    }
    else if (pay >= 103350)
    {
        STATE_TAX = .24;
    }
    else if (pay >= 48475)
    {
        STATE_TAX = .22;
    }
    else if (pay >= 11925)
    {
        STATE_TAX = .12;
    }
    else
    {
        STATE_TAX = .1;
    }
}