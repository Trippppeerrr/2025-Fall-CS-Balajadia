/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 1
 * Prompt 1
Write three functions named volume(). Each volume function should take a different number
of parameters(one (1) through three (3), respectively). You must also write a test program that
uses the different volume() functions to calculate the correct areas for the implied shapes. For
example,
● volume(4) returns 64.0
● volume(4, 6) returns approximately 301.44
● volume(4, 6, 8) returns 192.0
For a reference to the different areas that can be calculated, please use this:
https://www.varsitytutors.com/hotmath/hotmath_help/topics/perimeter-area-volume
*/

#include <iostream>
#include <cmath>
#include <iomanip>

double volume(double x);
double volume(double x, double y);
double volume(double x, double y, double z);

const double pi = 3.1415;

int main()
{
    using namespace std;

    int num1, num2, num3;

    // asks for input
    cout << "Enter three numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    // sets to 2 decimal points
    cout << fixed << showpoint;
    cout << setprecision(2);

    // displays the volumes
    cout << "The first volume using " << num1 << " is " << volume(num1) << endl;
    cout << "The second volume using " << num1 << " and " << num2 << " is " << volume(num1, num2) << endl;
    cout << "The thrid volume using " << num1 << ", " << num2 << " and " << num3 << " is " << volume(num1, num2, num3) << endl;

    return 0;
}

// displays volume of a cube taking one number
double volume(double x)
{
    return pow(x, 3);
}

// displays volume of a cylinder taking two numbers
double volume(double x, double y)
{
    return pi * pow(x, 2) * y;
}

// displays volume of a rectangle taking three numbers
double volume(double x, double y, double z)
{
    return x * y * z;
}