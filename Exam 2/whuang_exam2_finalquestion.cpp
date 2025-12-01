/**
 * @name William Huang
 * @assignment Exam 2
 * @prompt Final Question
 * Final Question
Write a program that asks the user if they want to convert from feet and inches to meters and
centimeters or from meters and centimeters to feet and inches. The program then performs the desired
conversion.

Write a function that reads in a length in feet and inches and outputs the equivalent length in
meters and centimeters. Use at least three other functions for this conversion: one for input,
one or more for calculating, and one for output. Include a loop that lets the user repeat this
computation for new input values until the user says he or she wants to end the program.

Write a function that reads in the length in meters and centimeters and outputs the equivalent
length in feet and inches. Use at least three other functions for this conversion: one for input,
one or more for calculating, and one for output. Include a loop that lets the user repeat this computation
for new input values until the user says he or she wants to end the program.

There are these conversions that can be used:

3.2808 feet in one meter
0.3048 meters in one foot
100 centimeters in one meter
12 inches in one foot, and
1 inch is 2.54 centimeters
Have the user respond by typing the integer 1 for one type of conversion and
 2 for the other conversion. The program reads the user’s answer and then executes an if-else statement.
Each branch of the if-else statement will be a function call. The two functions
 called in the if-else statement will have other function definitions. Thus, they will be function
definitions that call other functions in their function bodies. Include a loop
that lets the user repeat this computation for new input values until the user says they want to end the progra
*/

#include <iostream>

void feet2Meters();
void meters2Feet();
double calculate(std::string from, std::string to, double num);
double input(std::string option1, std::string option2, std::string &type, std::string to);
void display(double num1, double num2, std::string original, std::string next);

const double feetToMeters = 3.2808;
const double metersToFeet = .3048;
const double cmToMeters = 100;
const double inToFeet = 12;
const double inToCm = 2.54;

int main()
{
    using namespace std;
    int ftOrM;

    cout << "Would you like to convert from (1) FT and IN to M and CM or from (2) M and CM to FT and IN?";
    cin >> ftOrM;

    if (ftOrM == 1)
    {
        feet2Meters();
    }
    else
        meters2Feet();
}

// converst feet and in to meters or cm
void feet2Meters()
{
    using namespace std;
    bool loop = true;
    string type, to;
    double num, result;

    while (loop)
    {
        num = input("(ft) feet", "(in) inches", type, to);
        result = calculate(type, to, num);
        display(num, result, type, to);
    }
}

// converst meters and cm to feet or in
void meters2Feet()
{
    using namespace std;
    bool loop = true;
    string type, to;
    double num, result;

    while (loop)
    {
        num = input("(m) meters", "(cm) centimeters", type, to);
        result = calculate(type, to, num);
        display(num, result, type, to);
    }
}

// calculates values based on conversion from and to
double calculate(std::string from, std::string to, double num)
{
    if (from == "ft")
    {
        if (to == "cm")
        {
            return num * metersToFeet * cmToMeters;
        }
        else if (to == "m")
        {
            return num * feetToMeters;
        }
        else if (to == "in")
        {
            return num * inToFeet;
        }
        else
            return num;
    }
    else if (from == "in")
    {
        if (to == "cm")
        {
            return num * inToCm;
        }
        else if (to == "m")
        {
            return num / inToFeet * metersToFeet;
        }
        else if (to == "ft")
        {
            return num / inToFeet;
        }
        else
            return num;
    }
    else if (from == "m")
    {
        if (to == "cm")
        {
            return num / cmToMeters;
        }
        else if (to == "ft")
        {
            return num * feetToMeters;
        }
        else if (to == "in")
        {
            return num * feetToMeters * inToFeet;
        }
        else
            return num;
    }
    else
    {
        if (to == "ft")
        {
            return num / inToCm * inToFeet;
        }
        else if (to == "m")
        {
            return num * cmToMeters;
        }
        else if (to == "in")
        {
            return num / inToCm;
        }
        else
            return num;
    }
    return num;
}

// gets the input from the user and returns the inputted value
double input(std::string option1, std::string option2, std::string &type, std::string to)
{
    using namespace std;
    int in;

    cout << "Enter a number: ";
    cin >> in;
    cout << "Is this in " << option1 << " or " << option2 << "?";
    cin >> type;
    cout << "is this converting to (ft) feet, (in) inches, (m) meters, or (cm) centimeters?";
    cin >> to;

    return in;
}

// displays the value converted from and to
void diplay(double num1, double num2, std::string original, std::string next)
{
    using namespace std;
    cout << num1 << " " << original << " to " << num2 << " " << next << endl;
}
