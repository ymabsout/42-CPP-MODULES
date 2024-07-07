# Module 05: Repetition and Exceptions 🖥️

## Overview

Module 05 focuses on repetition and exception handling in C++ programming. This module covers essential topics such as creating bureaucratic systems, handling forms, and implementing custom exceptions. By the end of this module, you will have a comprehensive understanding of how to manage errors and implement repetitive processes in C++.

## Topics Covered 📚

| Topic                           | Description                                                                                           |
|---------------------------------|-------------------------------------------------------------------------------------------------------|
| **Exception Handling**          | Mechanisms to handle runtime errors using `try`, `catch`, and `throw` keywords.                       |
| **Standard Exceptions**         | Built-in exception classes provided by the C++ standard library.                                      |
| **Creating Custom Exceptions**  | Designing and implementing your own exception classes to handle specific error conditions.            |
| **Class Inheritance**           | Creating derived classes from a base class to promote code reuse and extend functionality.            |
| **Orthodox Canonical Form**     | A set of rules to ensure consistent and predictable class behavior, including default constructors, copy constructors, and destructors. |
| **Operator Overloading**        | Providing custom implementations for standard operators (e.g., `<<`) to work with user-defined types. |

## Exercises 📝

| Exercise                                    | Objective                                                                |
|---------------------------------------------|--------------------------------------------------------------------------|
| **Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!** | Implementing a Bureaucrat class with custom exception handling for invalid grades. |
| **Exercise 01: Form up, maggots!**          | Creating a Form class with specific attributes and implementing the signing functionality. |
| **Exercise 02: No, you need form 28B, not 28C...** | Implementing various concrete form classes that inherit from an abstract base class and perform specific actions. |
| **Exercise 03: At least this beats coffee-making** | Creating an Intern class that generates forms based on input parameters. |

## Compilation Instructions 🔧

Compile your code with the following command:
```sh
c++ -Wall -Wextra -Werror -std=c++98 <source_files> -o <output_executable>