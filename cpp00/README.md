# Module 00: Introduction to C++

## Overview

Module 00 introduces the basic concepts of C++ programming. This module is designed to provide a solid foundation in C++ by covering essential topics such as namespaces, classes, member functions, stdio streams, initialization lists, static, and const. By the end of this module, you will have a good understanding of basic C++ concepts and will be able to write simple C++ programs.

## Topics Covered

| Topic                | Description                                                                                           |
|----------------------|-------------------------------------------------------------------------------------------------------|
| **Namespaces**       | A namespace is a declarative region that provides a scope to the identifiers inside it. Used to organize code and prevent name collisions.|
| **Classes**          | A user-defined type that represents a blueprint for objects. Includes attributes (data members) and methods (member functions).            |
| **Member Functions** | Functions defined inside a class associated with objects of that class. Instance methods operate on specific instances; static methods belong to the class. |
| **Stdio Streams**    | Input and output streams for reading from and writing to standard input and output (`std::cout`, `std::cin`, `std::cerr`).                |
| **Initialization Lists** | A way to initialize data members of a class. Syntax: `ClassName::ClassName() : member1(value1), member2(value2) {}`.                  |
| **Static**           | Declares class members shared among all objects of the class. Static data members and static member functions can be called on the class itself. |
| **Const**            | A keyword making variables unmodifiable or declaring member functions that do not modify the object. Includes const variables and const member functions. |

## Exercises

| Exercise                          | Objective                                                        |
|-----------------------------------|------------------------------------------------------------------|
| **Exercise 00: Megaphone**        | Implement a simple program to repeat input in uppercase.         |
| **Exercise 01: My Awesome PhoneBook** | Create a simple phonebook using classes and object-oriented programming. |
| **Exercise 02: The Job Of Your Dreams** | Recreate a lost file for a banking application.                   |

## Compilation Instructions

Compile your code with the following command:
```sh
c++ -Wall -Wextra -Werror -std=c++98 <source_files> -o <output_executable>