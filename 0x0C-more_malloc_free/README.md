# 0x0C. C - More malloc, free

## Overview
This project focuses on advanced dynamic memory allocation in C, including the use of `malloc`, `free`, `exit`, `calloc`, and `realloc` functions. The project took place from November 2, 2023, to November 3, 2023.

## Resources
- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)
- Man pages:
  - `exit(3)`
  - `calloc`
  - `realloc`

### Additional Resources
- [Practical use of MALLOC in C - Dynamic Memory Allocation](https://www.youtube.com/watch?v=fJbIuhs24zQ)

## Learning Objectives
By the end of this project, students should be able to:
- Understand the function and use of `exit`
- Describe what the functions `calloc` and `realloc` do and how to use them
- Discuss the best practices for dynamic memory allocation and deallocation

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will compile on Ubuntu 20.04 LTS using `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a newline
- Code should use the Betty style for checks
- Not allowed to use global variables
- No more than 5 functions per file
- Allowed functions: `malloc`, `free`, and `exit`. Other functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden
- Allowed macros: `va_start`, `va_arg` and `va_end`
- `_putchar` is allowed
- The prototypes of all your functions and the prototype of `_putchar` should be included in your header file called `main.h`
- Don't forget to push your `main.h`
- All header files should be include guarded

## Tasks
The project involves several tasks ranging from basic dynamic memory allocation to more complex operations using `calloc` and `realloc`.

## Quiz Questions
### Sample Questions
- What will happen if you attempt to `free` a pointer not obtained from `malloc`?
- How do you correctly check for a successful `malloc` call?
- What are the implications of using `realloc` vs. `malloc`?

## Project Submission
Students are required to submit all their source files and a `README.md` file explaining the project and each script's functionality. All files must adhere to the coding and documentation standards set forth in this project outline.

## Assessment
The project includes both mandatory and optional tasks, assessed automatically upon submission. Achieving a high score requires a thorough understanding and correct implementation of memory management functions in C.
