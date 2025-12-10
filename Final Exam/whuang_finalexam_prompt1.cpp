/**
 * @name William Huang
 * @assignment Final Exam
 * @prompt prompt 1
 * Prompt 1
Write a C++ program that reads in the high and low temperatures for each day of the week. The
program should then print out a nicely formatted table showing each day's high and low
temperatures and the average temperature. This program also prints the weekly high, low, and
average. The program should allow the user to enter the temperatures daily in order (e.g.,
Sunday through Saturday) and label the days appropriately. For the output, the program should
calculate and display the average temperature for each day, rounded to one decimal place.
Additionally, include a loop that allows the user to repeat the entire process for another week
until they request to end the program. The user interface should be clear and straightforward,
making inputting the temperature data and understanding the output easy.
An example of the output is available on the next page.
*/

#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;

    string day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    double high[7];
    double low[7];
    bool loop = true;
    double total = 0, totalHigh = 0, totalLow = 0;
    double avg, avgHigh, avgLow;

    do
    {
        cout << "Enter the high and low temperatures of each day of the week.\n";

        for (int i = 0; i < 7; i++)
        {

            cout << day[i] << ":\n";
            cout << "  High Temperature: ";
            cin >> high[i];
            cout << "  Low Temperature: ";
            cin >> low[i];
        }

        cout << "\nWeekly Temperature Report\n";
        cout << "--------------------------\n";

        cout << left << setw(12) << "Day"
             << right << setw(8) << "High"
             << setw(8) << "Low"
             << setw(10) << "Average" << endl;
        cout << "----------------------------------------\n";

        cout << fixed << showpoint << setprecision(1);
        for (int i = 0; i < 7; i++)
        {
            totalHigh += high[i];
            totalLow += low[i];
            double avgDay = (high[i] + low[i]) / 2.0;

            total += avgDay;

            cout << left << setw(12) << day[i] // day name left-aligned
                 << right << setw(8) << fixed << setprecision(1) << high[i]
                 << setw(8) << low[i]
                 << setw(10) << avgDay
                 << endl;
        }
        avg = total / 7;
        avgHigh = totalHigh / 7;
        avgLow = totalLow / 7;

        cout << "\nWeekly high is: " << avgHigh << endl;
        cout << "Weekly low is: " << avgLow << endl;
        cout << "Weekly average is: " << avg << endl;

        cout << "\nWould you like to enter temperatures for another week? (y/n): ";
        char input;
        cin >> input;

        if (input == 'n')
        {
            loop = false;
        }
    } while (loop == true);

    cout << "Goodbye!";
}