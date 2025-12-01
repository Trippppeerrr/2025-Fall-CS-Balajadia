/**
 * @file whuang_project6a.cpp
 * @author William Huang
 * @brief project 6a
 * @version 1.0
 * @date 2025-10-27
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <cmath>

double cubeTSA(int x);
double cuboidTSA();
double rightCircularCylinderTSA(int x);
void display(int x, int y, int z);

const double pi = 3.1415;

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Enter three numbers: ";

    cin >> num1;
    cin >> num2;
    cin >> num3;

    display(num1, num2, num3);

    return 0;
}

double cubeTSA(int x)
{
    return pow(x, 2) * 6;
}

double cuboidTSA(int x, int y, int z)
{
    return 2 * (x * y + y * z + x * z);
}

double rightCircularCylinderTSA(int r, int h)
{
    return (2 * pi * pow(r, 2)) + (2 * pi * r * h);
}

void display(int x, int y, int z)
{
    cout << "The total surface area of a cube with side " << x << " is: " << cubeTSA(x) << endl;
    cout << "The total surface area of a cube with side " << y << " is: " << cubeTSA(y) << endl;
    cout << "The total surface area of a cube with side " << z << " is: " << cubeTSA(z) << endl;
    cout << "The total surface area of a cuboid with base " << x << ", height " << y << ", length " << z << " is: " << cuboidTSA(x, y, z) << endl;
    cout << "The total surface area of a cuboid with base " << y << ", height " << z << ", length " << x << " is: " << cuboidTSA(x, y, z) << endl;
    cout << "The total surface area of a cuboid with base " << z << ", height " << x << ", length " << y << " is: " << cuboidTSA(x, y, z) << endl;
    cout << "The total surface area of a right circular cylinder with a radius " << x << " and height " << y << " is: " << rightCircularCylinderTSA(x, y) << endl;
    cout << "The total surface area of a right circular cylinder with a radius " << x << " and height " << z << " is: " << rightCircularCylinderTSA(x, z) << endl;
    cout << "The total surface area of a right circular cylinder with a radius " << y << " and height " << x << " is: " << rightCircularCylinderTSA(y, x) << endl;
    cout << "The total surface area of a right circular cylinder with a radius " << y << " and height " << z << " is: " << rightCircularCylinderTSA(y, z) << endl;
    cout << "The total surface area of a right circular cylinder with a radius " << z << " and height " << x << " is: " << rightCircularCylinderTSA(z, x) << endl;
    cout << "The total surface area of a right circular cylinder with a radius " << z << " and height " << y << " is: " << rightCircularCylinderTSA(z, y) << endl;
}