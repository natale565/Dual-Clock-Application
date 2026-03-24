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