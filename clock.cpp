// implements all functionality to clock and time format, menu.

#include "clock.h"
#include <string>
#include <iostream>
using namespace std;

// global variable to store current time.
int hours;
int minutes;
int seconds;

// sets initial time values.
void setTime(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

// adds zero to single digit number, if it is a two digit number, returns number.
// example 2 -> 02, 25 -> 25
string twoDigitString(int n)
{
    if (n < 10)
    {
        return "0" + to_string(n);
    }
    else
    {
        return to_string(n);
    }
}

// returns a string the length of n with the character c.
string nCharString(size_t n, char c)
{

    return string(n, c);
}

// formats time to 24 hour format
string formatTime24(unsigned int h, unsigned int m, unsigned int s)
{

    return twoDigitString(h) + ":" +
           twoDigitString(m) + ":" +
           twoDigitString(s);
}

// formats time to 12 hour format
string formatTime12(unsigned int h, unsigned int m, unsigned int s)
{

    string minutes = twoDigitString(m);
    string seconds = twoDigitString(s);

    int hour12 = h % 12;

    if (hour12 == 0)
    {
        hour12 = 12;
    }

    string hour = twoDigitString(hour12);

    string period;

    if (h < 12)
    {
        period = " A M";
    }
    else
    {
        period = " P M";
    }

    return hour + ":" + minutes + ":" + seconds + period;
}

// prints menu to output
void printMenu(char *strings[], unsigned int numStrings, unsigned char width)
{

    cout << nCharString(width, '*') << endl;

    for (unsigned int i = 0; i < numStrings; i++)
    {

        string item = strings[i];
        string indexText = to_string(i + 1);

        int currentLength = 2 + indexText.length() + 3 + item.length();
        int spacesNeeded = width - currentLength - 1;

        if (spacesNeeded < 0)
            spacesNeeded = 0;

        cout << "* " << indexText << " - " << item
             << nCharString(spacesNeeded, ' ') << "*" << endl;

        if (i != numStrings - 1)
        {
            cout << endl;
        }
    }

    cout << nCharString(width, '*') << endl;
}

// prompts user until a valid menu choice is made, outputs error message for invalid input.
unsigned int getMenuChoice(unsigned int maxChoice)
{
    unsigned int choice = 0;

    while (true)
    {
        if (choice < 1 || choice > maxChoice)
        {
            if (choice != 0)
            {
                cout << "Invalid choice, try again." << endl;
            }

            cin >> choice;
        }
        else
        {
            return choice;
        }
    }
}

// displays 12 and 24 hour clock side by side.
void displayClocks(unsigned int h, unsigned int m, unsigned int s)
{

    cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;
    cout << nCharString(1, '*') << nCharString(6, ' ') << "12-HOUR CLOCK" << nCharString(6, ' ') << nCharString(1, '*') << nCharString(3, ' ');
    cout << nCharString(1, '*') << nCharString(6, ' ') << "24-HOUR CLOCK" << nCharString(6, ' ') << nCharString(1, '*') << endl;
    cout << endl;
    cout << nCharString(1, '*') << nCharString(6, ' ') << formatTime12(h, m, s) << nCharString(7, ' ') << nCharString(1, '*') << nCharString(3, ' ');
    cout << nCharString(1, '*') << nCharString(8, ' ') << formatTime24(h, m, s) << nCharString(9, ' ') << nCharString(1, '*') << endl;
    cout << nCharString(27, '*') << nCharString(3, ' ') << nCharString(27, '*') << endl;
}

// handles menu interaction with user until they exit.
void mainMenu()
{

    unsigned int choice = 0;

    while (choice != 4)
    {

        choice = getMenuChoice(4);

        if (choice == 1)
        {
            addOneHour();
        }
        else if (choice == 2)
        {
            addOneMinute();
        }
        else if (choice == 3)
        {
            addOneSecond();
        }
    }
}