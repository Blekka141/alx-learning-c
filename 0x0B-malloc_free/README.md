# 0x0B. C - malloc, free

## Project Overview
This project, conducted from October 30 to November 1, 2023, focuses on the dynamic memory allocation in C using `malloc` and `free`. The aim is to understand how to effectively manage memory in C programming.

## Resources
**Read or Watch:**
- [0x0a - malloc & free - quick overview.pdf](https://fakeurl.com/malloc-and-free-overview)
- [Dynamic memory allocation in C - malloc calloc realloc free (Video)](https://youtube.com/examplelink)

**man or help:**
- `malloc`
- `free`

**Additional Resources:**
- [Dynamic Memory Allocation in C Programming Explained](https://anotherexampleurl.com/dynamic-memory)

## Learning Objectives
By the end of this project, you are expected to understand:
- The difference between automatic and dynamic allocation.
- How to use `malloc` and `free`, including their purpose and application.
- Appropriate situations for using dynamic memory allocation.
- How to use `valgrind` to identify memory leaks and ensure proper memory management.

## Requirements
### General
- **Editors:** vi, vim, emacs.
- **Environment:** All files will be compiled on Ubuntu 20.04 LTS using gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **Submission Guidelines:**
  - Code should follow the Betty style.
  - Do not use global variables.
  - Limit of five functions per file.
  - Only the `malloc` and `free` functions from the C standard library are allowed.
  - Use `_putchar` for output; do not push your `_putchar.c`.
  - Include all your function prototypes in `main.h`, which should also be pushed to your repo.

### Coding Standards
- Ensure all files end with a newline.
- A README.md file must be included at the root of the folder of the project.
- Header files should be guarded to prevent multiple inclusions.

## Quiz Questions
Examples of understanding and application might include:

1. **Memory Allocation Size:**
   - `malloc((sizeof(char) * 10) + 1)` will allocate **11 bytes**, sufficient for a 10-character string plus the null terminator.

2. **Tool for Memory Leak Detection:**
   - Valgrind is used to **validate memory allocation** and detect memory leaks in programs.

3. **Effective Memory Usage:**
   - When using `malloc(sizeof(int) * 4)`, **16 bytes** are typically allocated on systems where `sizeof(int)` is 4 bytes.
