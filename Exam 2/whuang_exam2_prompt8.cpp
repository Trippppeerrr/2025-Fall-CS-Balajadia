/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 8
 * Prompt 8
In arithmetic and number theory, the least common multiple, lowest common multiple, or
smallest common multiple of two integers a and b, usually denoted by lcm(a, b), is the smallest
positive integer that is divisible by both a and b.
Write a C++ function findLCM() to find the least common multiple of two numbers. The
function will take two integers as parameters and must check that both of the integers are above
zero (0) to be valid.
For example, the least common multiple of 4 and 5 is 20.
*/

#include <iostream>

int lcm(int a, int b);
int gcm(int numerator, int denominator);

int main()
{

    int a, b;
    int temp;
    bool loop = true;
    int leastcm;

    std::cout << "Enter two numbers: \n";
    std::cin >> a;
    std::cin >> b;
    temp = a;

    if (b > a)
    {
        a = b;
        b = temp;
    }

    leastcm = lcm(a, b);

    if (leastcm == -1)
    {
        std::cout << "Invalid number try again";
    }
    else
        std::cout << "The LCM of " << a << " and " << b << " is " << leastcm;
}

int lcm(int a, int b)
{

    if (a == 0 || b == 0)
    {
        return -1;
    }
    return (a * b) / gcm(a, b);
}

int gcm(int a, int b)
{
    int r, gcd;
    bool loop = true;

    while (loop)
    {
        r = a % b;

        if (r == 0)
        {
            gcd = b;
            loop = false;
        }
        else
        {
            a = b;
            b = r;
        }
    }

    return gcd;
}