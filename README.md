# 🕒 Dual Clock Application (C++)

## 📌 Overview

This project is a C++ console application that displays and updates time in both **12-hour (AM/PM)** and **24-hour (military)** formats simultaneously.

The user can interact with a menu to increment the time by:

* One hour
* One minute
* One second

The program continues running until the user chooses to exit.

---

## 🎯 Features

* Displays two clocks side-by-side:

  * 12-hour format (HH:MM:SS AM/PM)
  * 24-hour format (HH:MM:SS)
* User-driven menu system
* Input validation for menu choices
* Proper time rollover logic:

  * Seconds → Minutes
  * Minutes → Hours
  * Hours → resets after 23

---

## 🧠 Program Flow

1. User enters initial time (hours, minutes, seconds)
2. Program displays both clocks
3. Menu is displayed with options
4. User selects an option:

   * Add one hour
   * Add one minute
   * Add one second
   * Exit program
5. Time updates accordingly
6. Loop repeats until user exits

---

## 🗂️ File Structure

```
project-1/
│
├── main.cpp      # Entry point, handles user interaction loop
├── clock.cpp     # Function implementations (logic, formatting, menu, time updates)
├── clock.h       # Function declarations (header file)
```

---

## ⚙️ How to Compile & Run

### Compile:

```bash
g++ main.cpp clock.cpp -o clockApp
```

### Run:

```bash
./clockApp
```

---

## 🧩 Key Functions

### Time Formatting

* `formatTime24()` → Returns time in 24-hour format
* `formatTime12()` → Returns time in 12-hour format

### Menu System

* `printMenu()` → Displays formatted menu
* `getMenuChoice()` → Validates user input

### Time Updates

* `addOneHour()`
* `addOneMinute()`
* `addOneSecond()`

### Display

* `displayClocks()` → Shows both clocks side-by-side

---

## ⚠️ Input Notes

* Menu choices must be between **1 and 4**
* Invalid inputs will prompt the user to try again

---

## 🛠️ Technologies Used

* C++
* Standard Library (`<iostream>`, `<string>`)

---

## 📚 Concepts Demonstrated

* Modular programming (header + source files)
* Functions and parameter passing
* Loops and conditionals
* Input validation
* String formatting
* State management using global variables

---

## 🚀 Future Improvements

* Add support for non-numeric input handling
* Replace global variables with a class-based design
* Add real-time clock functionality
* Improve UI formatting

---

## 👤 Author

Christopher Natale

---

## 📄 License

This project is for educational purposes.
