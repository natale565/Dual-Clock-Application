#include <iostream>
#include "clock.h"
using namespace std;


int main(){

    int h, m, s;

    unsigned int choice = 0;

    char *menuItems[] = {
        (char *)"Add One Hour",
        (char *)"Add One Minute",
        (char *)"Add One Second",
        (char *)"Exit Program"
    };

    // Gets initial time
    cout << "Enter hour: ";
    cin >> h;
    cout << "Enter minute: ";
    cin >> m;
    cout << "Enter second: ";
    cin >> s;

    setTime(h, m, s);

    // While loop for user choices, updates clock or exits program
    while (choice != 4)
    {
        displayClocks(h, m, s);
        cout << endl;

        printMenu(menuItems, 4, 26);

        choice = getMenuChoice(4);

        if (choice == 1)
        {
            addOneHour();
            h = (h + 1) % 24;
        }
        else if (choice == 2)
        {
            addOneMinute();
            if (m == 59)
            {
                m = 0;
                h = (h + 1) % 24;
            }
            else
            {
                m++;
            }
        }
        else if (choice == 3)
        {
            addOneSecond();
            if (s == 59)
            {
                s = 0;
                if (m == 59)
                {
                    m = 0;
                    h = (h + 1) % 24;
                }
                else
                {
                    m++;
                }
            }
            else
            {
                s++;
            }
        }

        cout << endl;
    }

    return 0;
}