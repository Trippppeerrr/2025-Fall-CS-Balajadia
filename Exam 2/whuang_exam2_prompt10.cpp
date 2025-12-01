/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt prompt 10
 * Prompt 10
You are writing a program to calculate a student's final grade based on the average of three exam scores.

Write a function double calculateAverage(double a, double b, double c) that returns the average of three numbers.
Write another function char determineLetterGrade(double average) that:
Returns 'A' for average ≥ 90
Returns 'B' for average ≥ 80
Returns 'C' for average ≥ 70
Returns 'D' for average ≥ 60
Returns 'F' otherwise
In the main() function:
Ask the user to enter three exam scores.
Use your calculateAverage() function to compute the average.
Call determineLetterGrade() to get the letter grade.
Output the average and the letter grade.
*/

#include <iostream>
#include <iomanip>

double calculateAverage(double a, double b, double c);
char determineLetterGrade(double average);

int main()
{
    using namespace std;
    double exam1, exam2, exam3;

    double avg;

    cout << "Enter three exam scores (0-100): \n";
    cin >> exam1;
    cin >> exam2;
    cin >> exam3;

    avg = calculateAverage(exam1, exam2, exam3);

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "Your average is " << avg << " and you recieved a letter grade of: " << determineLetterGrade(avg);
}

double calculateAverage(double a, double b, double c)
{
    return (a + b + c) / 3;
}

char determineLetterGrade(double average)
{
    if (average >= 90)
    {
        return 'A';
    }
    else if (average >= 80)
    {
        return 'B';
    }
    else if (average >= 70)
    {
        return 'C';
    }
    else if (average >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}