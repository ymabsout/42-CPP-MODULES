# 🎓 C++ Module 08: Templated Containers, Iterators, Algorithms

Welcome to the exciting world of C++ Module 08! 🚀 In this module, we dive deep into templated containers, iterators, and algorithms. Each exercise in this module is crafted to strengthen your understanding and skills in C++ through practical and engaging tasks. Let's explore each exercise! 🔍

## Exercises Overview 📜

| Exercise | Description | Key Functions |
|----------|--------------|----------------|
| [Exercise 01: Span 🏃‍♂️](#exercise-01-span-🏃‍♂️) | Develop a `Span` class to store a maximum of N integers. Implement functions to find the shortest and longest spans between the numbers. | `addNumber()`, `shortestSpan()`, `longestSpan()` |
| [Exercise 02: EasyFind 🔍](#exercise-02-easyfind-🔍) | Implement a template function `easyfind` that takes a container and a value, and returns an iterator to the first occurrence of the value in the container. | `easyfind()` |
| [Exercise 03: MutantStack 🐍](#exercise-03-mutantstack-🐍) | Create a class `MutantStack` that inherits from `std::stack` and allows iteration through its elements. | `begin()`, `end()` |

## Exercise Details 📖

### Exercise 01: Span 🏃‍♂️

**Purpose**: Develop a `Span` class that can store a maximum of N integers. Implement functions to find the shortest and longest spans between the numbers.

- **addNumber()**: Adds a single number to the Span. Throws an exception if the Span is full.
- **shortestSpan()**: Finds and returns the shortest span between the numbers.
- **longestSpan()**: Finds and returns the longest span between the numbers.

📝 *Hint*: Use a range of iterators to fill your Span efficiently.

### Exercise 02: EasyFind 🔍

**Purpose**: Implement a template function `easyfind` that takes a container and a value, and returns an iterator to the first occurrence of the value in the container.

- **easyfind()**: Searches for the first occurrence of a given value in a container and returns an iterator to it.

📝 *Hint*: Use STL algorithms like `std::find`.

### Exercise 03: MutantStack 🐍

**Purpose**: Create a class `MutantStack` that inherits from `std::stack` and allows iteration through its elements.

- **begin()**: Returns an iterator to the beginning of the stack.
- **end()**: Returns an iterator to the end of the stack.

📝 *Hint*: Utilize `std::deque` or `std::list` for underlying storage to support iteration.

# 📦 Famous Containers and Iterators in C++

C++ offers a rich set of containers and iterators that make managing collections of objects easy and efficient. Here's an overview of the most commonly used containers and iterators:

## Containers 🛠️

### 1. `std::vector` 🚀
- **Description**: A dynamic array that can grow in size.
- **Use Case**: When you need a resizable array.
- **Key Functions**: `push_back()`, `pop_back()`, `size()`, `capacity()`

### 2. `std::list` 📝
- **Description**: A doubly linked list.
- **Use Case**: When you need fast insertion and deletion of elements.
- **Key Functions**: `push_front()`, `push_back()`, `pop_front()`, `pop_back()`

### 3. `std::deque` 🧱
- **Description**: A double-ended queue that allows fast insertions and deletions at both ends.
- **Use Case**: When you need efficient access and modification at both the front and back.
- **Key Functions**: `push_front()`, `push_back()`, `pop_front()`, `pop_back()`

### 4. `std::set` 🌳
- **Description**: An ordered set that stores unique elements.
- **Use Case**: When you need to maintain a collection of unique elements sorted in a specific order.
- **Key Functions**: `insert()`, `erase()`, `find()`

### 5. `std::map` 🗺️
- **Description**: An ordered associative container that stores key-value pairs.
- **Use Case**: When you need to associate unique keys with specific values.
- **Key Functions**: `insert()`, `erase()`, `find()`, `operator[]`

### 6. `std::unordered_set` 🌪️
- **Description**: A hash table-based set that stores unique elements.
- **Use Case**: When you need fast access to unique elements without regard to order.
- **Key Functions**: `insert()`, `erase()`, `find()`

### 7. `std::unordered_map` 🔍
- **Description**: A hash table-based associative container that stores key-value pairs.
- **Use Case**: When you need fast access to key-value pairs without regard to order.
- **Key Functions**: `insert()`, `erase()`, `find()`, `operator[]`

## Iterators 🔄

### 1. Input Iterator 🔄
- **Description**: Reads data from the container.
- **Use Case**: Single-pass algorithms that read data sequentially.
- **Example**: `std::istream_iterator`

### 2. Output Iterator 🖋️
- **Description**: Writes data to the container.
- **Use Case**: Single-pass algorithms that write data sequentially.
- **Example**: `std::ostream_iterator`

### 3. Forward Iterator ➡️
- **Description**: Reads or writes data, can move forward.
- **Use Case**: Algorithms that need to read/write data sequentially more than once.
- **Example**: `std::forward_list::iterator`

### 4. Bidirectional Iterator ↔️
- **Description**: Reads or writes data, can move forward and backward.
- **Use Case**: Algorithms that need to traverse data in both directions.
- **Example**: `std::list::iterator`

### 5. Random Access Iterator 🎲
- **Description**: Reads or writes data, can move to any element in constant time.
- **Use Case**: Algorithms that require fast access to any element.
- **Example**: `std::vector::iterator`, `std::deque::iterator`

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
