# 0x10. C - Variadic Functions

## Project Overview
This project focuses on understanding and implementing variadic functions in C programming, which are functions that accept a variable number of arguments. It took place from November 9, 2023, to November 10, 2023, and included a comprehensive evaluation of variadic functions' functionality through various tasks.

## Resources
**Read or Watch:**
- [stdarg.h](https://en.cppreference.com/w/c/variadic)
- [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword](https://en.cppreference.com/w/c/language/const)

**man or help:**
- `stdarg`

**Additional Resources:**
- [Variadic Functions in C Programming](https://www.tutorialspoint.com/cprogramming/c_variable_arguments.htm)

## Learning Objectives
By the end of this project, learners should be able to:
- Understand what variadic functions are and how to implement them.
- Use `va_start`, `va_arg`, and `va_end` macros efficiently.
- Explain the purpose and usage of the `const` type qualifier.

## Requirements
### General
- **Editors:** vi, vim, emacs.
- **Environment:** All files will be compiled on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **Code Style:** Code should adhere to the Betty style and will be checked with `betty-style.pl` and `betty-doc.pl`.
- **Restrictions:**
  - No global variables.
  - No more than 5 functions per file.
  - The only allowed C standard library functions are `malloc`, `free`, and `exit`.
  - Usage of functions like `printf`, `puts`, `calloc`, `realloc` etc., is forbidden.
  - Allowed to use macros: `va_start`, `va_arg`, and `va_end`.
  - Allowed to use `_putchar`.
- **Submission Files:**
  - Do not need to push `_putchar.c`; it will not be taken into account.
  - The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `variadic_functions.h`.
  - Ensure all your header files are include guarded.

### Documentation
- A `README.md` file at the root of the folder of the project is mandatory, explaining the project's specifications and individual files' functionality.

## Assessment
The project includes an auto QA review that checks all mandatory and optional tasks to ensure that they meet the specified requirements.

## Quiz Questions
Here are some sample questions to test understanding of the concepts discussed:

1. **What does it mean to dereference a NULL pointer?**
   - This generally leads to a segmentation fault, indicating an error for accessing memory that the program doesn't have the rights to access.

2. **Which command is used to list symbols stored in a static library?**
   - The `nm` command is typically used for this purpose.

3. **Why should a static library be indexed with `ranlib`?**
   - Indexing a static library with `ranlib` makes linking to the library faster because it allows quicker lookup of symbols.

This project serves as a foundation for understanding more complex C programming topics such as dynamic libraries, memory management, and more advanced data structures.
