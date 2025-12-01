/**
 * @file whuang_lab6.cpp
 * @author William Huang
 * @brief lab 6
 * @version 1.0
 * @date 2025-11-03
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    ifstream inStream;
    ofstream outStream;

    // opens files
    outStream.open("lab6_final.txt");

    inStream.open("lab6_start.txt", ios::app);

    if (inStream.fail())
    {
        cout << "Input File has failed to open";
    }
    if (outStream.fail())
    {
        cout << "Output File has failed to open";
    }

    char num;
    inStream.get(num);
    // inStream >> num;
    //  reads each character in the file
    while (!inStream.eof())
    {

        // checks if it is a digit
        if (isdigit(num))
        {
            cout << num;
            outStream << num;
        }
        else if (isspace(num))
        {
            outStream << endl;
        }
        // moves on to the next character
        else
            inStream.get(num);
        inStream >> num;
    }

    // closes file
    inStream.close();
    outStream.close();
    return 0;
}