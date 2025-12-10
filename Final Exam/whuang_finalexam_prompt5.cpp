/**
 * @name William Huang
 * @assignment Final Exam
 * @prompt prompt 5
 * Prompt 5
Write a program that reads a person’s name in the following format: first name, middle name or initial, last name, and then suffix. The program then outputs the name in the following
format:

First_Initial, Middle_Initial, Last_Initial, Suffix
For example, the input

Hilario Castro Balajadia Jr
should produce the output

HCBJr
Your program should allow for users who give no middle name or middle initial and for users without a suffix. In that case, the output, of course, contains no middle initial or suffix. For
example, the input:

Hilario Balajadia
should also produce the output

HB
If using C-strings, assume that each name is at most 50 characters long. Alternatively, use the class string. (Hint: You may want to use three string variables rather than one large
string variable for the input. You may find it easier to not use getline.)
*/

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    string line;

    cout << "Enter a your name (first middle last suffix): ";
    getline(cin, line);

    int spaceCount = 0;

    cout << line[0];
    for (int i = 1; i < line.length(); i++)
    {

        if (line[i - 1] == ' ')
        {
            spaceCount++;
            cout << line[i];
        }
        if (spaceCount == 3)
        {
            for (int j = i + 1; j < line.length(); j++)
            {
                cout << line[j];
            }
        }
    }
}