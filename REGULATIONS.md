# General Rules

## Compiling

- Compile your code with `c++` using the flags `-Wall -Wextra -Werror`.
- Ensure your code can still compile with the flag `-std=c++98`.

### Formatting and Naming Conventions

- Name the exercise directories as follows: `ex00`, `ex01`, ..., `exn`.
- Follow the guidelines for naming your files, classes, functions, member functions, and attributes.
- Use **UpperCamelCase** for class names. Files containing class code should be named according to the class name. For example, a class named `BrickWall` should have files named `BrickWall.hpp`, `BrickWall.cpp`, or `BrickWall.tpp`.
- Unless specified otherwise, every output message must end with a newline character and be displayed to the standard output.
- No enforced coding style for C++ modules. Write clean and readable code that peer-evaluators can understand.

### Allowed/Forbidden

You are now coding in C++, so:

- Use almost everything from the standard library. Utilize C++ versions of C functions where possible.
- Do not use any external libraries, C++11 (and derived forms), or Boost libraries. The following functions are also forbidden: `*printf()`, `*alloc()`, and `free()`. Using them will result in a grade of 0.
- The `using namespace <ns_name>` and `friend` keywords are forbidden unless explicitly stated otherwise. Violating this will result in a grade of -42.
- **The STL can only be used in Modules 08 and 09**. This means no **Containers** (e.g., `vector`, `list`, `map`) and no **Algorithms** (anything requiring the `<algorithm>` header) before then. Violating this will result in a grade of -42.

### Design Requirements

- Avoid memory leaks when allocating memory with the `new` keyword.
- From Module 02 to Module 09, design your classes in the **Orthodox Canonical Form**, unless stated otherwise.
- Implementing functions in a header file (except for function templates) will result in a grade of 0 for the exercise.
- Ensure each header can be used independently by including all necessary dependencies and using **include guards** to prevent double inclusion. Failing this will result in a grade of 0.

### Read Me

- You can add additional files if needed to organize your code, as long as you submit the mandatory files.
- The guidelines may be short, but examples can show additional requirements not explicitly written in the instructions.
- Read each module completely before starting.
- Use your critical thinking skills!