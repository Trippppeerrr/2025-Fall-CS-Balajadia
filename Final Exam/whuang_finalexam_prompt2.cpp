/**
 * @name William Huang
 * @assignment Final Exam
 * @prompt prompt 2
 * Prompt 2
Generate a histogram for a quiz given to a class of students using letter grades: A, B, C, D, and
F. Write a program that allows the user to enter grades for each student. The program should
count the number of A’s, B’s, C’s, D’s, and F’s as the grades are entered, using an array to store
these counts. The program should be capable of handling an arbitrary number of student
grades.
At the end, print a graphical histogram using stars (*) to represent the frequency of each grade.
For example, if the input grades are ‘A C B A F A B C F’, the output should display:
A: ***
B: **
C: **
D:
F: **
Make the program user-friendly, allowing easy input of grades, and validate that the input is one
of the permitted letter grades (`A B C D F`). Include a loop to let the user enter grades until
they indicate they are finished.

*/

#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    int gradeCount[5] = {0, 0, 0, 0, 0};
    char grade;
    bool loop = true;

    do
    {
        cout << "Enter a grade (A, B, C, D, F): ";
        cin >> grade;
        grade = toupper(grade);

        while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F')
        {
            cout << "Invalid input. Please enter A, B, C, D, or F: ";
            cin >> grade;
            grade = toupper(grade);
        }

        if (grade == 'A')
        {
            gradeCount[0]++;
        }
        if (grade == 'B')
        {
            gradeCount[1]++;
        }
        if (grade == 'C')
        {
            gradeCount[2]++;
        }
        if (grade == 'D')
        {
            gradeCount[3]++;
        }
        if (grade == 'F')
        {
            gradeCount[4]++;
        }

        cout << "Enter another grade? (y/n): ";
        char input;
        cin >> input;

        if (input == 'n')
        {
            loop = false;
        }
    } while (loop);

    cout << "\nGrade Histogram: \n";

    cout << "A: ";
    for (int i = 0; i < gradeCount[0]; i++)
    {
        cout << '*';
    }
    cout << "\nB: ";
    for (int i = 0; i < gradeCount[1]; i++)
    {
        cout << '*';
    }
    cout << "\nC: ";
    for (int i = 0; i < gradeCount[2]; i++)
    {
        cout << '*';
    }
    cout << "\nD: ";
    for (int i = 0; i < gradeCount[3]; i++)
    {
        cout << '*';
    }
    cout << "\nF: ";
    for (int i = 0; i < gradeCount[4]; i++)
    {
        cout << '*';
    }
}