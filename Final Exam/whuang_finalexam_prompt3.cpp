/**
 * @name William Huang
 * @assignment Final Exam
 * @prompt prompt 3
 * Prompt 3
The following code creates a small phone book where users can search for either a
name or a phone number to find the corresponding information. Two arrays are used: one
stores a list of names, and the other stores the corresponding phone numbers. For example,
Emily Davis’ phone number is 555-1234, and John Smith’s phone number is 555-5678.
Write two functions:
1. lookupName: This function takes a name and returns the corresponding phone number,
or an empty string if the name is not found.
2. lookupNumber: This function takes a phone number and returns the corresponding
name, or an empty string if the phone number is not found.
The program should allow users to search by name or phone number and perform the
appropriate lookup. The user can continue performing lookups until they exit.
*/

#include <iostream>
#include <string>
using namespace std;
string lookupName(string name, string arr[], string numbers[], int size);
string lookupNumber(string number, string arr[], string numbers[], int size);
// Function to look up a name based on the phone number
int main()
{
    const int size = 4;
    string names[size] = {
        "Emily Davis",
        "John Smith",
        "Alice Brown",
        "David Johnson"};
    string phoneNumbers[size] = {
        "555-1234",
        "555-5678",
        "555-8765",
        "555-4321"};
    char continueSearch;
    do
    {
        int choice;
        cout << "Do you want to search by (1) Name or (2) Phonenumber? ";
        cin >>
            choice;
        cin.ignore(); // Ignore newline character after the input
        if (choice == 1)
        {
            string targetName;
            cout << "Enter the name: ";
            getline(cin, targetName);
            string result = lookupName(targetName, names,
                                       phoneNumbers, size);
            if (!result.empty())
                cout << "The phone number is: " << result << endl;
            else
                cout << "Name not found." << endl;
        }
        else if (choice == 2)
        {
            string targetPhone;
            cout << "Enter the phone number: ";
            getline(cin, targetPhone);
            string result = lookupNumber(targetPhone, phoneNumbers,
                                         names, size);
            if (!result.empty())
                cout << "The name is: " << result << endl;
            else
                cout << "Phone number not found." << endl;
        }
        else
        {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
        cout << "Do you want to perform another lookup? (y/n): ";
        cin >> continueSearch;
        cin.ignore(); // Ignore newline character after the input
    } while (continueSearch == 'y' || continueSearch == 'Y');
    cout << "Goodbye!" << endl;
    return 0;
}

string lookupName(string name, string arr[], string numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == name)
        {
            return numbers[i];
        }
    }
    return "";
}

string lookupNumber(string number, string arr[], string numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            return numbers[i];
        }
    }
    return "";
}