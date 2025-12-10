/**
 * @name William Huang
 * @assignment Final Exam
 * @prompt prompt 6
 * Prompt 6
Write a program that will read a line of text and output the number of words in the line and the number of occurrences of each letter. Define a word as any string of letters delimited at
each end by either whitespace, a period, a comma, or the beginning or end of the line. You can assume that the input consists entirely of letters, whitespace, commas, and periods. When
outputting the number of letters in a line, please count uppercase and lowercase letters as different. Output the letters in alphabetical order and list only those letters that occur in the input line.

For example, the input line:

The quick brown fox jumps over the lazy dog.
should produce output similar to the following:

Number of words: 9
Letter occurrences:
T: 1
a: 1
b: 1
c: 2
d: 1
e: 2
f: 1
g: 1
h: 2
i: 1
j: 1
k: 1
l: 1
m: 1
n: 1
o: 4
p: 1
q: 1
r: 2
s: 1
t: 1
u: 2
v: 1
w: 1
x: 1
y: 1
z: 1
*/

#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
    using namespace std;
    string line;

    char alph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    cout << "Enter a sentence: ";
    getline(cin, line);

    // counts words
    int wordCount = 0;

    for (int i = 0; i < line.length(); i++)
    {
        if (isalpha(line[i]) &&
            (i == 0 || !isalpha(line[i - 1])))
        {
            wordCount++;
        }
    }

    cout << "Number of words: " << wordCount << endl;
    cout << "Letter occurrences:" << endl;

    // uppercase
    for (int j = 0; j < 26; j++)
    {
        int count = 0;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == alph[j])
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << alph[j] << ": " << count << endl;
        }
    }

    // lowercase
    for (int j = 0; j < 26; j++)
    {
        int count = 0;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == tolower(alph[j]))
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << char(tolower(alph[j])) << ": " << count << endl;
        }
    }

    return 0;
}