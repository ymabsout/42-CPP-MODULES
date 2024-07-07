# Module 06: C++ Casts 🖥️

## Overview

Module 06 focuses on type casting in C++ programming. This module covers essential topics such as scalar type conversion, serialization, and type identification. By the end of this module, you will have a comprehensive understanding of how to perform and utilize different types of casts in C++.

## Topics Covered 📚

| Topic                        | Description                                                                                           |
|------------------------------|-------------------------------------------------------------------------------------------------------|
| **Type Casting**             | Mechanisms to convert a variable from one type to another using static, dynamic, const, and reinterpret casts. |
| **Scalar Type Conversion**   | Converting scalar types such as `char`, `int`, `float`, and `double` from string representations.     |
| **Serialization**            | Converting complex data types to a format that can be easily stored or transmitted and reconstructing them back. |
| **Type Identification**      | Identifying the actual type of an object at runtime without using `std::typeinfo`.                    |

## Exercises 📝

| Exercise                                    | Objective                                                                 |
|---------------------------------------------|---------------------------------------------------------------------------|
| **Exercise 00: Conversion of scalar types** | Implementing a `ScalarConverter` class to convert string representations to various scalar types. |
| **Exercise 01: Serialization**              | Creating a `Serializer` class to convert a pointer to an unsigned integer and vice versa. |
| **Exercise 02: Identify real type**         | Implementing a `Base` class with derived classes `A`, `B`, and `C` to identify the actual type of an object. |

## Compilation Instructions 🔧

Compile your code with the following command:
```sh
c++ -Wall -Wextra -Werror -std=c++98 <source_files> -o <output_executable>