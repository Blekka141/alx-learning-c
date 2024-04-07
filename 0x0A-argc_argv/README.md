of command-line arguments in C programming, focusing on `argc` (argument count) and `argv` (argument vector). The project took place from October 27, 2023, to October 28, 2023, and aimed to provide a deep understanding of how to handle program input from the command line.

## Resources
**Read or Watch:**
- [Arguments to main](https://www.gnu.org/software/libc/manual/html_node/Program-Arguments.html)
- [argc and argv](https://www.tutorialspoint.com/cprogramming/c_command_line_arguments.htm)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- [how to compile with unused variables](https://gcc.gnu.org/onlinedocs/gcc/Variable-Attributes.html)

**Additional Resources:**
- [Command Line Arguments (Argc & Argv) in C Programming](https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/)

## Learning Objectives
By the end of this project, participants should be able to:
- Utilize arguments passed to programs via the command line.
- Describe two main prototypes and determine when to use each.
- Apply `__attribute__((unused))` or cast to `(void)` to handle unused variables or parameters in functions.

## Requirements
### General
- **Editors:** vi, vim, emacs.
- **Environment:** Compilation on Ubuntu 20.04 LTS using `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **Code Style:** Follows Betty style, checked by `betty-style.pl` and `betty-doc.pl`.
- **Restrictions:**
  - No global variables allowed.
    - Limit of five functions per file.
      - Standard library usage is permitted.
      - **Submission Files:**
        - Must include a `README.md` at the project's root folder.
	  - Ensure to use `_putchar` for output; `_putchar.c` will be provided during compilation.
	    - Include all function prototypes in `main.h` and ensure it's pushed to your repository.
	      - All header files must be guarded against multiple inclusions.

## Assessment
The project involves mandatory and optional tasks that are automatically reviewed upon submission to validate the understanding and correct application of C programming concepts related to command-line arguments.

## Quiz Questions
Sample questions to check comprehension:

1. **What is typically `argv[0]` in a C program?**
   - It is usually the program name.

2. **How does `argc` relate to `argv`?**
   - `argc` counts how many command-line arguments are passed, including the program name; `argv` is an array of these arguments.

3. **What does `argv[argc]` usually contain?**
   - It is typically `NULL`, marking the end of the argument list.
