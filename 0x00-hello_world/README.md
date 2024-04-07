# 0x00. C - Hello, World

## Overview
This project is focused on introducing the C programming language, covering the basics of compilation processes, C syntax, and fundamental programming constructs. The project period was from October 5, 2023, 6:00 AM to October 6, 2023, 6:00 AM.

## Resources

### Read or Watch:
- Everything you need to know to start with C.pdf
- Important figures in C history: Dennis Ritchie, Brian Kernighan, Linus Torvalds
- C Programming basics and compilation process
- Betty Coding Style

### Man or Help:
- `gcc`
- `printf (3)`
- `puts`
- `putchar`

## Learning Objectives
At the end of this project, you should be able to explain:
- The awesomeness and historical significance of C programming
- The roles of Dennis Ritchie, Brian Kernighan, and Linus Torvalds in C's development
- Compilation process using `gcc`
- Basics of writing C code including using `printf`, `puts`, and `putchar`
- The purpose and use of the `sizeof` operator
- The importance of the Betty coding style and how to apply it

## Requirements

### C
- **Allowed editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS using gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Ensure all files end with a new line
- Code must adhere to the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No use of `system`

### Shell Scripts
- **Scripts requirements:** Must be two lines long, tested on Ubuntu 20.04 LTS

## More Info on Betty Linter
To use the Betty linter:
1. Clone the Betty repo and install with `sudo ./install.sh`.
2. Create a script named `betty` to run both betty-style and betty-doc on your files.
3. Ensure `betty` is executable and in your PATH.
4. Use `betty <filename>` to check your C files.

## Quiz Questions
### Questions and Correct Answers
1. **What is the common extension for a C header file?**
   - **Correct Answer:** .h

2. **In which category belongs the C programming language?**
   - **Correct Answer:** Compiled language

3. **What are the different steps to form an executable file from C source code?**
   - **Correct Answer:** Preprocessing, compilation, assembly, and linking

4. **Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?**
   - **Correct Answers:**
     - `/* Comment */`
     - `/*`
       `* Comment`
       `*/`

5. **What is the common extension for a C source file?**
   - **Correct Answer:** .c

6. **Which command can be used to compile a C source file?**
   - **Correct Answer:** gcc
