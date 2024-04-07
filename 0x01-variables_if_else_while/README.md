# 0x01. C - Variables, if, else, while

## Overview
This project focuses on the fundamental concepts of C programming including variables, control statements, and loops. It took place from October 6, 2023, 6:00 AM to October 7, 2023, 6:00 AM with an automated review upon the deadline.

## Resources

### Read or Watch
- Everything you need to know to start with C (focus on specified topics like data types, variable declarations, and control structures)
- Keywords and identifiers in C
- Integers and arithmetic operators in C
- Conditional structures (`if`, `if...else`) and loops (`while`)
- Logical and relational operators
- The ASCII character set

### Man or Help
- `ascii` (ignore `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, and loop structures not covered in this project)

## Additional Resources
- Introduction to C (Basic structure and variables)

## Learning Objectives
By the end of this project, you should be able to:
- Explain the use of arithmetic, logical, and relational operators
- Understand the boolean context of C programming
- Use conditional statements like `if` and `if...else`
- Implement while loops in programs
- Declare and assign variables
- Print variable values using `printf`
- Understand and use the ASCII character set
- Explain the use of gcc flags -m32 and -m64

## Requirements

### General
- **Allowed editors:** vi, vim, emacs
- **Environment:** Code will be compiled on Ubuntu 20.04 LTS using gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- Code must adhere to the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- Use of `system` is not allowed

## Quiz Questions
### Questions and Answers
1. **What is the size of the float data type?**
   - **Correct Answer:** 4 bytes

2. **What is the size of the unsigned int data type?**
   - **Correct Answer:** 4 bytes

3. **Which of the following are valid while or do/while statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)**
   - **Correct Answers:**
     - `a = 0; while (a < b) printf("%d\n", a++);`
     - `a = 0; do { printf("%d\n", a); a++; } while (a < b);`
     - `a = 0; while (a < b) { printf("%d\n", a); a++; }`

4. **Which of the following are valid for statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)**
   - **Correct Answers:**
     - `a = 0; for (; a < b;) { printf("%d\n", a++); }`
     - `for (a = 0; a < b; a++) { printf("%d\n", a); }`
     - `for (a = 0; a < b; a++) printf("%d\n", a);`

5. **Which of the following are valid if statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)**
   - **Correct Answers:**
     - `if (a > b) return (a);`
     - `if ((((((a > b)))))) { return (a); }`
     - `if (a > b) { return (a); }`

