/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 3
 * Prompt 3
In mathematics, the greatest common divisor of two or more integers, which are not all
zero, is the largest positive integer that divides each of the integers. You can calculate the
greatest common factor (GCF), also known as the greatest common divisor (GCD), of two
numbers in C++ using the Euclidean algorithm. This is commonly used in simplifying fractions to
their lowest forms.
Write a function named convertToLowestTerms() that inputs two integer
parameters by reference named numerator and denominator. The function should treat these
variables as a fraction and reduce them to the lowest terms. For example, if the numerator is 20
and the denominator is 60, then the function should change the variables to 1 and 3,
respectively.
This will require finding the greatest common divisor for the numerator and denominator
and then dividing both variables by that number. If the denominator is zero, the function should
return false, otherwise, the function should return true
*/

#include <iostream>

void convertToLowestTerms(int numerator, int denominator);

int main()
{
    using namespace std;

    int num1, num2;

    cout << "Enter two numbers: \n";
    cin >> num1;
    cin >> num2;

    convertToLowestTerms(num1, num2);
}

void convertToLowestTerms(int numerator, int denominator)
{
    int a, b, num1 = numerator, num2 = denominator;
    int r, gcd;
    bool loop = true;
    if (numerator > denominator)
    {
        a = numerator;
        b = denominator;
    }
    else
    {
        b = numerator;
        a = denominator;
    }

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
    std::cout << gcd;
    numerator = numerator / gcd;
    denominator = denominator / gcd;

    std::cout << "You entered: " << num1 << '/' << num2 << " which simplifies to " << numerator << '/' << denominator << std::endl;
}