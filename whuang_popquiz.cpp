/**
 * @file whuang_popquiz.cpp
 * @author William Huang
 * @brief pop quiz
 * @version 0.1
 * @date 2025-09-24
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please input a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz ";
        }
        else if (i % 3 == 0 && i % 5 != 0)
        {
            cout << "Fizz ";
        }
        else if (i % 3 != 0 && i % 5 == 0)
        {
            cout << "Buzz ";
        }
        else
        {
            cout << i << " ";
        }
    }
}