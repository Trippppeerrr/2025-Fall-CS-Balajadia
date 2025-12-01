/**
 * @file whuang_project4.cpp
 * @author William Huang
 * @brief project 4
 * @version 1.0
 * @date 2025-10-01
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <cmath>

bool isPrime(int n);
bool isSquare(int n);

using namespace std;
int main()
{
    // declare variables
    int num;
    int prime, countPrime = 0;
    int square, countSquare = 0;

    // prompts users for input
    cout << "Enter an integer: ";
    cin >> num;
    cout << endl
         << "Enter the number of primes: ";
    cin >> prime;
    cout << endl
         << "Enter the number of squares: ";
    cin >> square;

    cout << endl
         << "Prime numbers between 1 and " << num << " are:" << endl;

    // loops through numbers between 1 and given number for primes
    for (int i = 1; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            countPrime++;
            if (countPrime == prime)
            {
                i = num + 1;
            }
        }
    }

    // loops through numbers between 1 and the given number for squares
    cout << endl
         << "Perfect squares between 1 and " << num << " are: " << endl;
    for (int i = 1; i <= num; i++)
    {
        if (isSquare(i))
        {
            cout << i << " ";
            countSquare++;
        }
        if (countSquare == square)
        {
            i = num + 1;
        }
    }
}

// checks for primes
bool isPrime(int n)
{
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// checks for squares
bool isSquare(int n)
{
    if (sqrt(n) == floor(sqrt(n)))
    {
        return true;
    }
    else
        return false;
}