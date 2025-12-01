/**
 * @file whuang_lab2.cpp
 * @author William Huang
 * @brief Lab 2
 * @version 0.1
 * @date 2025-09-08
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using namespace std;

int main()
{
     // x1 refers to the first inputted integer
     // x2 refers to the second inputted integer
     int x1, x2;

     // prompt user for the two integers
     cout << "Please enter two integers (positive whole numbers), Separated by a space: ";
     cin >> x1 >> x2;

     // calculating sum between x1 and x2
     int sum = x1 + x2;
     // subtracting x2 from x1
     int sub = x1 - x2;
     // multiplying x1 and x2
     int mult = x1 * x2;
     // dividing x1 by x2
     int div = x1 / x2;
     // employing modulus between x1 and x2
     int mod = x1 % x2;

     // output the values
     cout << "\n"
          << x1 << " + " << x2 << " = " << sum;
     cout << "\n"
          << x1 << " - " << x2 << " = " << sub;
     cout << "\n"
          << x1 << " * " << x2 << " = " << mult;
     cout << "\n"
          << x1 << " / " << x2 << " = " << div;
     cout << "\n"
          << x1 << " % " << x2 << " = " << mod;
}