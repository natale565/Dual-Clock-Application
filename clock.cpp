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