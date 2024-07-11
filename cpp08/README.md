# 🎓 C++ Module 08: Templated Containers, Iterators, Algorithms

Welcome to the exciting world of C++ Module 08! 🚀 In this module, we dive deep into templated containers, iterators, and algorithms. Each exercise in this module is crafted to strengthen your understanding and skills in C++ through practical and engaging tasks. Let's explore each exercise! 🔍

## Exercises Overview 📜

| Exercise                                    | Description                                                                                                     | Key Functions                                      |
|---------------------------------------------|-----------------------------------------------------------------------------------------------------------------|----------------------------------------------------|
| [Exercise 00: EasyFind 🔍](#exercise-00-easyfind-🔍)   | Implement a template function `easyfind` that takes a container and a value, and returns an iterator to the first occurrence of the value in the container. | `easyfind()`                                       |
| [Exercise 01: Span 🏃‍♂️](#exercise-01-span-🏃‍♂️)       | Develop a `Span` class to store a maximum of N integers. Implement functions to find the shortest and longest spans between the numbers. | `addNumber()`, `shortestSpan()`, `longestSpan()`   |
| [Exercise 02: MutantStack 🐍](#exercise-02-mutantstack-🐍) | Create a class `MutantStack` that inherits from `std::stack` and allows iteration through its elements. | `begin()`, `end()`                                  |

## Exercise Details 📖

### Exercise 00: EasyFind 🔍

**Purpose**: Implement a template function `easyfind` that takes a container and a value, and returns an iterator to the first occurrence of the value in the container.

- **easyfind()**: Searches for the first occurrence of a given value in a container and returns an iterator to it.

📝 *Hint*: Use STL algorithms like `std::find`.

Here is a simple implementation of `easyfind`:

```cpp
#include <algorithm>
#include <iostream>
#include <vector>

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

// Define a custom exception class for when an element is not found
class elementNotFound : public std::exception {
public: 
    // Override the what() method to provide a custom error message
    const char * what() const _NOEXCEPT {
        return ("Element not found in the template container");
    }
};

// Template function to find an element in a container
template <typename T> 
void easyfind(T a, int b) {
    // Use std::find to search for the element
    if (std::find(a.begin(), a.end(), b) != a.end()) {
        std::cout << "Found element " << b << " in the template container" << std::endl;
    } else {
        // Throw an exception if the element is not found
        throw elementNotFound();
    }
}

#endif
```

### Exercise 01: Span 🏃‍♂️

**Purpose**: Develop a `Span` class that can store a maximum of N integers. Implement functions to find the shortest and longest spans between the numbers.

- **addNumber()**: Adds a single number to the Span. Throws an exception if the Span is full.
- **shortestSpan()**: Finds and returns the shortest span between the numbers.
- **longestSpan()**: Finds and returns the longest span between the numbers.

📝 *Hint*: Use a range of iterators to fill your Span efficiently.

Here is a simple implementation of the `Span` class:

#### Span.hpp

```cpp
#include <iostream>
#include <exception>
#include <algorithm>
#include <vector> 

#ifndef SPAN_HPP
#define SPAN_HPP

class Span {
private: 
    int _maxSize;  // Maximum size of the Span
    std::vector<int> _numbers;  // Vector to store the numbers

public:
    Span(unsigned int N) : _maxSize(N) {}  // Parameterized constructor

    void addNumber(unsigned int N) {
        if (_numbers.size() < _maxSize) {
            _numbers.push_back(N);
        } else {
            throw std::out_of_range("Span is full");
        }
    }

    unsigned int shortestSpan() {
        if (_numbers.size() <= 1) throw std::runtime_error("Not enough elements");
        std::sort(_numbers.begin(), _numbers.end());
        int minSpan = INT_MAX;
        for (size_t i = 1; i < _numbers.size(); ++i) {
            minSpan = std::min(minSpan, _numbers[i] - _numbers[i - 1]);
        }
        return minSpan;
    }

    unsigned int longestSpan() {
        if (_numbers.size() <= 1) throw std::runtime_error("Not enough elements");
        return *std::max_element(_numbers.begin(), _numbers.end()) - *std::min_element(_numbers.begin(), _numbers.end());
    }
};

#endif
```
#### Explanation:

1.  Header File (`Span.hpp`):
-   Data Members:
-   `_maxSize`: Maximum size of the vector.
-   `_numbers`: Vector to store the numbers.
-   Member Functions:
-   `Span(unsigned int N)`: Constructor to initialize with the maximum size.
-   `void addNumber(unsigned int N)`: Adds a single number to the Span. Throws an exception if the Span is full.
-   `unsigned int shortestSpan()`: Finds the shortest span between the numbers.
-   `unsigned int longestSpan()`: Finds the longest span between the numbers.

### Exercise 02: MutantStack 🐍

**Purpose**: Create a class `MutantStack` that inherits from `std::stack` and allows iteration through its elements.

- **begin()**: Returns an iterator to the beginning of the stack.
- **end()**: Returns an iterator to the end of the stack.

📝 *Hint*: Utilize `std::deque` or `std::list` for underlying storage to support iteration.
# 📝 C++ `MutantStack` and `std::stack` Deep Dive

## Introduction

In this module, we explore the `MutantStack` class, which extends the functionality of the standard C++ `std::stack` container. We'll explain the implementation details and custom iterators, using emojis to make it more engaging.

## 🔍 What is `std::stack`?

`std::stack` is a container adaptor that gives the programmer the functionality of a stack - a data structure with LIFO (Last In, First Out) semantics. `std::stack` is implemented using an underlying container, which can be any standard container that supports back insertion and back deletion, such as `std::vector`, `std::deque`, or `std::list`.

### Key Features of `std::stack`
- **Push**: Add an element to the top of the stack.
- **Pop**: Remove the top element.
- **Top**: Access the top element.
- **Empty**: Check if the stack is empty.
- **Size**: Get the number of elements in the stack.

## 🛠️ Deep Implementation of `std::stack`

Internally, `std::stack` uses an underlying container to store elements. By default, it uses `std::deque`, but this can be customized. The stack operations (`push`, `pop`, `top`, etc.) are translated into operations on the underlying container.

### Example
```cpp
std::stack<int> stack;
stack.push(1);  // Adds 1 to the stack
stack.push(2);  // Adds 2 to the stack
stack.pop();    // Removes the top element (2)
int top = stack.top();  // Accesses the top element (1)
```

---

# 📦 Famous Containers and Iterators in C++

C++ offers a rich set of containers and iterators that make managing collections of objects easy and efficient. Here's an overview of the most commonly used containers and iterators:

## Containers 🛠️

| Container                     | Description                                                                                     | Use Case                                     | Key Functions                                  |
|-------------------------------|-------------------------------------------------------------------------------------------------|----------------------------------------------|------------------------------------------------|
| `std::vector` 🚀              | A dynamic array that can grow in size.                                                          | When you need a resizable array.             | `push_back()`, `pop_back()`, `size()`, `capacity()` |
| `std::list` 📝                | A doubly linked list.                                                                           | When you need fast insertion and deletion.   | `push_front()`, `push_back()`, `pop_front()`, `pop_back()` |
| `std::deque` 🧱               | A double-ended queue that allows fast insertions and deletions at both ends.                    | When you need efficient access at both ends. | `push_front()`, `push_back()`, `pop_front()`, `pop_back()` |
| `std::set` 🌳                 | An ordered set that stores unique elements.                                                     | When you need unique elements sorted.        | `insert()`, `erase()`, `find()`                   |
| `std::map` 🗺️                | An ordered associative container that stores key-value pairs.                                   | When you need to associate keys with values. | `insert()`, `erase()`, `find()`, `operator[]`   |
| `std::unordered_set` 🌪️      | A hash table-based set that stores unique elements.                                             | When you need fast access to unique elements.| `insert()`, `erase()`, `find()`                  |
| `std::unordered_map` 🔍       | A hash table-based associative container that stores key-value pairs.                           | When you need fast access to key-value pairs.| `insert()`, `erase()`, `find()`, `operator[]`   |

## Iterators 🔄

| Iterator Type                  | Description                                                           | Use Case                                       | Example                                   |
|--------------------------------|-----------------------------------------------------------------------|------------------------------------------------|-------------------------------------------|
| **Input Iterator** 🔄          | Reads data from the container.                                        | Single-pass algorithms that read data.         | `std::istream_iterator`                  |
| **Output Iterator** 🖋️        | Writes data to the container.                                         | Single-pass algorithms that write data.        | `std::ostream_iterator`                  |
| **Forward Iterator** ➡️       | Reads or writes data, can move forward.                               | Algorithms that read/write data sequentially.  | `std::forward_list::iterator`            |
| **Bidirectional Iterator** ↔️  | Reads or writes data, can move forward and backward.                  | Algorithms that traverse data in both directions. | `std::list::iterator`                     |
| **Random Access Iterator** 🎲  | Reads or writes data, can move to any element in constant time.       | Algorithms that require fast access.           | `std::vector::iterator`, `std::deque::iterator` |

---

# 📚 The Standard Template Library (STL) in C++

The Standard Template Library (STL) is a powerful library in C++ that provides a set of common data structures and algorithms. It is a crucial part of the C++ Standard Library and is designed to be efficient, reusable, and flexible. Let's explore what makes the STL so essential:

## Components of the STL 🧩

### 1. Containers 📦

Containers are data structures that store collections of objects. The STL provides various types of containers to suit different needs:

- **Sequence Containers**: Store elements in a linear arrangement.
  - `std::vector` 🚀: Dynamic array.
  - `std::deque` 🧱: Double-ended queue.
  - `std::list` 📝: Doubly linked list.
  - `std::forward_list` ➡️: Singly linked list.

- **Associative Containers**: Store elements formed by a combination of a key value and a mapped value, and can be quickly searched by key.
  - `std::set` 🌳: Ordered set.
  - `std::map` 🗺️: Ordered map.
  - `std::multiset` 🌳🌳: Ordered set with duplicate keys.
  - `std::multimap` 🗺️🗺️: Ordered map with duplicate keys.

- **Unordered Containers**: Store elements formed by a combination of a key value and a mapped value, and are organized into buckets to allow fast access.
  - `std::unordered_set` 🌪️: Unordered set.
  - `std::unordered_map` 🔍: Unordered map.
  - `std::unordered_multiset` 🌪️🌪️: Unordered set with duplicate keys.
  - `std::unordered_multimap` 🔍🔍: Unordered map with duplicate keys.

### 2. Iterators 🔄

Iterators are objects that enable a programmer to traverse through elements in a container. They provide a common interface for different types of containers.

- **Input Iterator** 🔄: Reads data from a container.
- **Output Iterator** 🖋️: Writes data to a container.
- **Forward Iterator** ➡️: Reads or writes data, can move forward.
- **Bidirectional Iterator** ↔️: Reads or writes data, can move forward and backward.
- **Random Access Iterator** 🎲: Reads or writes data, can move to any element in constant time.

### 3. Algorithms ⚙️

Algorithms are a collection of functions for processing sequences of elements. The STL provides a wide range of algorithms, such as:

- **Searching**: `std::find`, `std::binary_search`
- **Sorting**: `std::sort`, `std::stable_sort`
- **Modifying**: `std::copy`, `std::transform`
- **Set operations**: `std::set_union`, `std::set_intersection`
- **Numerical**: `std::accumulate`, `std::inner_product`

### 4. Function Objects (Functors) 🛠️

Function objects, or functors, are objects that can be called as if they are ordinary functions. They are used with algorithms to provide custom behavior.

- **Examples**: `std::less`, `std::greater`, custom functors defined by the user.

### 5. Utilities ⚡

The STL also provides utility components to support programming, such as:

- **Pairs**: `std::pair`
- **Tuples**: `std::tuple`
- **Smart Pointers**: `std::unique_ptr`, `std::shared_ptr`

## Benefits of the STL 🌟

- **Efficiency**: STL algorithms are designed to be highly efficient.
- **Reusability**: STL components are generic and can be reused with different data types.
- **Flexibility**: Provides a wide range of containers and algorithms to choose from.
- **Consistency**: Common interfaces and idioms make it easier to use and understand.

The STL is a cornerstone of modern C++ programming, providing the building blocks for efficient and maintainable code. Mastering the STL is essential for any serious C++ developer! 💪
