/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 2
 * Prompt 2
Write the following functions:
● a function named sort() that takes four integer parameters by reference. The function
should rearrange the parameter values so that the first parameter gets set to the
smallest value, the second parameter gets set to the second smallest value... and the
fourth parameter gets set to the largest value.
For example, given the variable assignments, a = 30; b = 10; c = 40; d = 20; then the
function call sort(a, b, c, d) should result in a = 10, b = 20, c = 30, d = 40.
● a function named reverseSort() that takes four integer parameters by reference.
The function should rearrange the parameter values so that the first parameter gets set
to the largest value, the second parameter gets set to the second largest value... and
the fourth parameter gets set to the smallest value.
For example, given the variable assignments, a = 30; b = 10; c = 20; d = 40; then the
function call reverseSort(a, b, c, d) should result in d = 40, c = 30, b = 20, and
a = 10.
Your final program will take user input for the three integers, then print them after they have
gone through sort() and reverseSort().
*/

#include <iostream>

void sort(int &a, int &b, int &c, int &d);
void reverseSort(int &a, int &b, int &c, int &d);

int main()
{
    using namespace std;

    int a, b, c, d;

    // takes 4 numbers from the user
    // works only if the numbers are not duplicates
    cout << "Enter four numbers to be sorted: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    sort(a, b, c, d);
    cout << "Sorted smallest to largest: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ".\n";
    reverseSort(a, b, c, d);
    cout << "Sorted largest to smallest: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ".\n";
}

void sort(int &a, int &b, int &c, int &d)
{
    int temp;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (a > d)
    {
        temp = a;
        a = d;
        d = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (b > d)
    {
        temp = b;
        b = d;
        d = temp;
    }
    if (c > d)
    {
        temp = c;
        c = d;
        d = temp;
    }
}

void reverseSort(int &a, int &b, int &c, int &d)
{
    int temp;

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (a < d)
    {
        temp = a;
        a = d;
        d = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (b < d)
    {
        temp = b;
        b = d;
        d = temp;
    }
    if (c < d)
    {
        temp = c;
        c = d;
        d = temp;
    }
}
