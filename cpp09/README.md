# 📝 C++ - Module 09: STL

## 📚 Summary
This document contains the exercises of Module 09 from the C++ modules.

## 🌟 Introduction
C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes". The goal of these modules is to introduce you to Object-Oriented Programming (OOP) with C++. Although modern C++ is different in many ways, this module adheres to the C++98 standard to keep things simple and straightforward.

## 🛠️ General Rules
- **Compiling**: Use `c++` with flags `-Wall -Wextra -Werror` and ensure compatibility with `-std=c++98`.
- **Naming Conventions**: Follow the provided guidelines for naming directories, files, classes, functions, and attributes.
- **Coding Style**: No strict coding style enforced, but write clean and readable code for peer evaluation.
- **Allowed/Forbidden**: Use the C++ standard library but avoid external libraries like C++11, Boost, and functions like `printf()`, `alloc()`, `free()`. Avoid `using namespace <ns_name>` and `friend` keywords unless specified.
- **Design Requirements**: Prevent memory leaks, design classes in Orthodox Canonical Form, and use include guards to avoid double inclusion.

## 📋 Module-Specific Rules
- **Standard Containers**: Mandatory use of standard containers for each exercise. Once used in an exercise, a container cannot be reused in subsequent exercises.
- **Makefile**: Each program must include a Makefile with rules `$(NAME)`, `all`, `clean`, `fclean`, and `re`.

## 🚀 Exercises

### Exercise 00: Bitcoin Exchange

#### Objective
Create a program that outputs the value of a certain amount of bitcoin on a specific date using a provided CSV database.

#### Program Overview
The program reads a CSV file containing bitcoin prices over time and another file containing dates and values to be evaluated. The goal is to multiply the values by the corresponding bitcoin price on the given dates and output the results.

#### Code Explanation

1. **Class Definition**: `BitcoinExchange`
   - Contains a constructor, destructor, copy constructor, assignment operator, and various member functions.
   - **Data Members**: `file` (file path) and `data` (map to store date and exchange rate).

2. **Constructor & Destructor**
   - **Default Constructor**: Initializes the class and prints a message.
   - **Parameterized Constructor**: Takes a file path as an argument and prints a message.
   - **Destructor**: Cleans up and prints a message.

3. **Copy Constructor & Assignment Operator**
   - **Copy Constructor**: Initializes a new object as a copy of an existing object.
   - **Assignment Operator**: Assigns the values from one object to another, ensuring no self-assignment.

4. **Member Functions**
   - **getData()**: Reads the `data.csv` file, parses it, and stores the date and exchange rate in the `data` map. Calls `applyRates()` after loading data.
   - **applyRates()**: Reads the input file provided at runtime, extracts date and value, and calculates the bitcoin value based on the exchange rate. Handles errors and edge cases.
   - **inputValue()**: Validates and extracts the value from the input string.
   - **inputDate()**: Validates and extracts the date from the input string. Checks for correct format and valid values for year, month, and day.
   - **leapYearChecker()**: Checks if a given year is a leap year.
   - **MonthDayChecker()**: Validates the day of the month for months with fewer than 31 days.
   - **getFile()**: Returns the file path.

#### `BitcoinExchange.hpp`

```cpp
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdexcept>

class BitcoinExchange {
private:
    char* file;
    std::map<std::string, double> data;

public:
    BitcoinExchange();
    BitcoinExchange(char* str);
    BitcoinExchange(const BitcoinExchange& other);
    ~BitcoinExchange();
    BitcoinExchange& operator=(const BitcoinExchange& other);

    void getData();
    void applyRates();
    static double inputValue(std::string& o);
    static std::string inputDate(std::string& o);
    static void leapYearChecker(int& year, std::string& o);
    static void MonthDayChecker(int& day, int& month);
    char* getFile() const;
};

#endif
```