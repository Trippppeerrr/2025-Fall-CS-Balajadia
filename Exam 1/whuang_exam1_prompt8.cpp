/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 8
 * Prompt 8
Write a program that allows the user to enter a time in seconds and then outputs how
far an object would drop if it is in freefall for that length of time. Assume that the object
starts at rest, there is no friction or resistance from air, and there is a constant
acceleration of 32 feet per second squared due to gravity. Use the equation:
𝑑𝑖𝑠𝑡𝑎𝑛𝑐𝑒 = 𝑎𝑐𝑐𝑒𝑙𝑒𝑟𝑎𝑡𝑖𝑜𝑛 × 𝑡𝑖𝑚𝑒2
2
You should first compute the product and then divide the result by two.
(The reason for this will be discussed later in the book.)
Hint: For this prompt, you will use the Math.pow() function.
*/

#include <iostream>
#include <cmath>

const int gravity = 32;

using namespace std;

int main()
{
    int time;
    double distance;

    cout << "Enter a time in seconds: ";
    cin >> time;

    distance = (gravity * pow(time, 2)) / 2;

    cout << "If an object were to drop with no friction or air resistance, the object would fall " << distance << " feet.";
}