/**
 * @file whuang_lab5.cpp
 * @author William Huang
 * @brief lab 5
 * @version 1.0
 * @date 2025-09-24
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Prime numbers between 1 and " << num << " are:" << endl;
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0 && i == j)
            {
                cout << i;
            }
        }
    }

    cout << "Perfect squares between 1 and 10 are: ";
    for (int i = 1; i < num; i++)
    {
        if (sqrt(i) == pow(i, 2))
        {
            cout << i;
        }
    }
}