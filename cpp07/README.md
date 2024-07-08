# 🌟 C++ Module 07: Templates, Class Templates, and Function Templates 🌟

Welcome to Module 07 of your C++ journey! In this module, you will explore the fascinating world of templates in C++. Templates are a powerful feature that allows you to write flexible and reusable code. This module covers function templates, class templates, and their practical applications.

---

## Table of Contents
1. [Introduction](#introduction)
2. [General Rules](#general-rules)
3. [Exercises](#exercises)
   - [Exercise 00: Start with a Few Functions](#exercise-00-start-with-a-few-functions)
   - [Exercise 01: Iter](#exercise-01-iter)
   - [Exercise 02: Array](#exercise-02-array)
4. [Submission and Peer-Evaluation](#submission-and-peer-evaluation)

---

## Introduction

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, often referred to as "C with Classes". This module is designed to introduce you to Object-Oriented Programming (OOP) using C++. The goal is to help you understand the basics of templates and how they can be used to write more efficient and reusable code.

---

## General Rules

- **Compiling**
  - Compile your code with `c++` and the flags `-Wall -Wextra -Werror`
  - Ensure your code compiles with the flag `-std=c++98`
- **Formatting and Naming Conventions**
  - Exercise directories: `ex00`, `ex01`, ..., `exn`
  - File names: `ClassName.hpp`, `ClassName.cpp`, `ClassName.tpp`
  - Class names: `UpperCamelCase`
- **Allowed/Forbidden**
  - Use the standard library where applicable, but avoid `C++11` and Boost libraries.
  - Forbidden functions: `*printf()`, `*alloc()`, `free()`
  - No use of `using namespace <ns_name>` and `friend` keywords.
  - Use of the STL is allowed only in Modules 08 and 09.

---

## Exercises

### Exercise 00: Start with a Few Functions

**Directory:** `ex00/`  
**Files to turn in:** `Makefile`, `main.cpp`, `whatever.{h,hpp}`  
**Forbidden functions:** None

#### Objectives

- Implement the following function templates:
  - `swap`: Swaps the values of two given arguments. Does not return anything.
  - `min`: Compares the two values passed in its arguments and returns the smallest one. If the two are equal, returns the second one.
  - `max`: Compares the two values passed in its arguments and returns the greatest one. If the two are equal, returns the second one.

**Example Usage:**

```cpp
int main() {
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    return 0;
}
```
## Exercise 01: Iter 🌟

| Description | Details |
|-------------|---------|
| **Task** | Implement a function template `iter` that takes 3 parameters and returns nothing. |
| **Parameters** | 1. The address of an array.<br>2. The length of the array.<br>3. A function that will be called on every element of the array. |
| **Functionality** | The `iter` function template must work with any type of array. The third parameter can be an instantiated function template. |
| **Turn-in Directory** | `ex01/` |
| **Files to Turn In** | `Makefile`, `main.cpp`, `iter.{h, hpp}` |
| **Forbidden Functions** | None |

### Example Usage
```cpp
template <typename T>
void printElement(T const & x) {
    std::cout << x << std::endl;
}

int main() {
    int array[] = { 1, 2, 3, 4, 5 };
    iter(array, 5, printElement);
    return 0;
}
```
# C++ Module 07 - Exercise 02: Array 🧩

## Exercise Overview

| Description | Details |
|-------------|---------|
| **Task** | Develop a class template `Array` that contains elements of type T and implements the following behavior and functions: |
| **Construction** | - **No parameter**: Creates an empty array.<br> - **With unsigned int n**: Creates an array of n elements initialized by default.<br> - **By copy and assignment operator**: Modifying either the original array or its copy after copying must not affect the other array. |
| **Memory Allocation** | - Use the operator `new[]` to allocate memory.<br> - Preventive allocation is forbidden.<br> - The program must never access non-allocated memory. |
| **Access** | - Elements can be accessed through the subscript operator `[]`.<br> - If the index is out of bounds, an `std::exception` is thrown. |
| **Size** | - Member function `size()` that returns the number of elements in the array.<br> - This function takes no parameter and must not modify the current instance. |
| **Turn-in Directory** | `ex02/` |
| **Files to Turn In** | `Makefile`, `main.cpp`, `Array.{h, hpp}`, optional file: `Array.tpp` |
| **Forbidden Functions** | None |

## Example Usage

### Code Example
```cpp
#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> numbers(5);
        for (unsigned int i = 0; i < numbers.size(); i++) {
            numbers[i] = i * 2;
        }

        for (unsigned int i = 0; i < numbers.size(); i++) {
            std::cout << numbers[i] << std::endl;
        }
        
        // Testing out of bounds access
        std::cout << numbers[10] << std::endl; // This should throw an exception

    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
