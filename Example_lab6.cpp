/**
 * @file example2.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-11-01
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    using namespace std;
    ifstream infile;
    ofstream outfile;

    // Opens input file and creates output file
    infile.open("lab6_start.txt");
    outfile.open("lab6_final.txt");

    if (infile.fail())
    {
        cerr << "input file opening failed" << endl;
        return 1;
    }
    if (outfile.fail())
    {
        cerr << "output file opening failed" << endl;
        return 1;
    }

    string input;

    // reads through each line of input file
    while (getline(infile, input))
    {
        istringstream iss(input);
        string letter;
        // Extraction
        while (iss >> letter)
        {
            if (isdigit(letter[0]))
            {
                outfile << letter << endl;
            }
        }
    }
    // closes file
    infile.close();
    outfile.close();
    return 0;
}