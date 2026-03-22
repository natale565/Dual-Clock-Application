// clock.h
// Header file containing function declarations for clock application

#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <string>

void setTime(int, int, int);

std::string twoDigitString(int);
std::string nCharString(size_t n, char c);
std::string formatTime24(unsigned int h, unsigned int m, unsigned int s);
std::string formatTime12(unsigned int h, unsigned int m, unsigned int s);
void printMenu(char *strings[], unsigned int numStrings, unsigned char width);
unsigned int getMenuChoice(unsigned int maxChoice);
void displayClocks(unsigned int h, unsigned int m, unsigned int s);
void mainMenu();
void addOneHour();
void addOneMinute();
void addOneSecond();

#endif