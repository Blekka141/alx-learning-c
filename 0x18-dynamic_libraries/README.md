# 0x18. C - Dynamic Libraries

## Project Overview

This project was focused on understanding and implementing dynamic libraries in C, contrasting with static libraries, and utilizing GCC for library creation. It took place from January 15, 2024, to January 16, 2024. The performance metrics from the auto QA review were a 96.77% mandatory score, a 100.0% optional score, leading to a total of 193.54%.

## Learning Objectives

By the end of this project, participants are expected to be proficient in:

- **Dynamic Libraries**: Understanding what a dynamic library is, how it works, how to create one, and how to use it.
- **Environment Variable $LD_LIBRARY_PATH**: Usage and importance.
- **Static vs. Shared Libraries**: Distinguishing the differences and appropriate applications.
- **Tools Usage**: Familiarity with tools like nm, ldd, and ldconfig for managing and inspecting libraries.

## Requirements

### C

- **Development Environment**: vi, vim, or emacs on Ubuntu 20.04 LTS.
- **Compilation**: Use gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89.
- **Coding Style**: Adhere to Betty coding style.
- **Restrictions**: No global variables, no more than 5 functions per file, and restricted use of the standard library.
- **System Functions**: Only `_putchar` is allowed alongside `malloc` and `free`; the `_putchar.c` file will not be pushed as it is provided during compilation.
- **Documentation**: All files must include a header file (`main.h`) with all function prototypes, and all header files must have include guards.

### Bash

- **Scripts**: Must be executable and start with `#!/bin/bash`.
- **Functionality**: Each script should be documented to describe its function.

## Resources

- **Dynamic vs. Static Libraries**: Understanding their differences and the contexts in which they are used.
- **Creating and Managing Libraries**: Using GCC and related tools to create and manage dynamic libraries.
- **Environment Variables**: Managing library paths through environment variables.

