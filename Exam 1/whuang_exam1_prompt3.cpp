/**
 * @name William Huang
 * @assignment Exam 1
 * @prompt prompt 3
 * Write a program that finds and prints all of the prime numbers between 3 and 100. A prime
number is a number such that one and itself are the only numbers that evenly divide it
(e.g., 3, 5, 7, 11, 13, 17, ...).
Note: one way to solve this problem is to use a doubly nested loop. The outer loop can iterate
from 3 to 100 while the inner loop checks to see if the counter value for the outer loop is prime.
One way to see if number n is prime is to loop from 2 to n − 1 and if any of these numbers
evenly divides n, then n cannot be prime. If none of the values from 2 to n − 1 evenly divide n,
then n must be prime.
(There are several easy ways to make this algorithm more efficient.)
*/

#include <iostream>

bool isPrime(int x);

using namespace std;

int main()
{

    for (int i = 3; i <= 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << ", ";
        }
    }
}

bool isPrime(int x)
{
    for (int i = 2; i <= (x / 2); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}