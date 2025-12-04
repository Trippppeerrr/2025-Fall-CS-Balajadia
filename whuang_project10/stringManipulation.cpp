/**
 * @file stringManipulation.cpp
 * @author William Huang
 * @brief project 10
 * @version 0.1
 * @date 2025-12-01
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <cstring>
#include <cctype>

void display(char str[], char mod[]);
void display(char str[]);
int countVowels(char array[]);
int countConsonants(char array[]);

int main()
{
    using namespace std;
    char str[101];
    char mod[101];
    char choice;

    cout << "Enter a string\n";
    cin.getline(str, 101);
    strcpy(mod, str);

    do
    {
        cout << "\nSelect a command:\n";
        cout << "A) Counting the number of vowels in the string.\n";
        cout << "B) Counting the number of consonants in the string.\n";
        cout << "C) Converting the string to all uppercase.\n";
        cout << "D) Converting the string to all lowercase.\n";
        cout << "E) Displaying the current string.\n";
        cout << "F) Enter a new string.\n";
        cout << "G) Exit the program.\n";
        cin >> choice;
        cin.ignore();
        choice = toupper(choice);

        cout << "\n";

        if (choice == 'A')
        {
            display(str);
            cout << "There are " << countVowels(str) << " vowels.\n";
        }
        if (choice == 'B')
        {
            display(str);
            cout << "There are " << countConsonants(str) << " consonants.\n";
        }
        if (choice == 'C')
        {
            for (int i = 0; i < 101; i++)
            {
                mod[i] = toupper(str[i]);
            }
            display(str, mod);
        }
        if (choice == 'D')
        {
            for (int i = 0; i < 101; i++)
            {
                mod[i] = tolower(str[i]);
            }
            display(str, mod);
        }
        if (choice == 'E')
        {
            display(str);
        }
        if (choice == 'F')
        {
            cout << "Enter a string\n";
            cin.getline(str, 101);
            strcpy(mod, str);
        }

    } while (choice != 'G');
}

void display(char str[], char mod[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        std::cout << str[i];
    }
    std::cout << std::endl;
    for (int i = 0; mod[i] != '\0'; i++)
    {
        std::cout << mod[i];
    }
    std::cout << std::endl;
}
void display(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        std::cout << str[i];
        if (str[i + 1] == '\0')
        {
            i = 1000;
        }
    }
    std::cout << std::endl;
}

// counts the number of vowels
int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (isalpha(c) && (tolower(c) == 'a' || tolower(c) == 'e' ||
                           tolower(c) == 'i' || tolower(c) == 'o' ||
                           tolower(c) == 'u'))
        {
            count++;
        }
    }
    return count;
}

// counts the number of consonants
int countConsonants(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (isalpha(c) && !(tolower(c) == 'a' || tolower(c) == 'e' ||
                            tolower(c) == 'i' || tolower(c) == 'o' ||
                            tolower(c) == 'u'))
        {
            count++;
        }
    }
    return count;
}