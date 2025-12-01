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

const double FEDERAL_INCOME_TAX = 0.22;
const double STATE_TAX = 0.093;
const double SOCIAL_SECURITY_TAX = 0.062;
const double MEDICAID_TAX = 0.0145;
const double RETIREMENT_PLAN = 0.15;
const double VISION_INSURANCE = 14.28;

int main()
{
   // create variables
   double grossPay;
   cout << "Enter gross pay: ";
   cin >> grossPay;

   // calculating deduction
   double federalAmount = FEDERAL_INCOME_TAX * grossPay;
   double stateAmount = STATE_TAX * grossPay;
   double socialAmount = SOCIAL_SECURITY_TAX * grossPay;
   double medicalAmount = MEDICAID_TAX * grossPay;
   double retireAmount = RETIREMENT_PLAN * grossPay;
   double total = grossPay - federalAmount - stateAmount - socialAmount - medicalAmount - retireAmount - VISION_INSURANCE;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "Pay after all deductions: $" << total;
}
