# 0x04. C - More functions, more nested loops

## Overview
This project, conducted from October 12, 2023, to October 13, 2023, deepens the exploration of functions and nested loops in C. It emphasizes the effective use of more complex programming constructs to manage and manipulate data and control flow within a C program.

## Resources

### Read or Watch:
- Nested while loops
- C - Functions
- Learning to Program in C (Part 06) up to 14:00
- Purpose of a function prototype
- C - Header Files (up to "Once-Only Headers" paragraph)

### Additional Resources:
- Functions in C programming

## Learning Objectives
By the end of this project, students are expected to be able to explain:
- Implementation and usage of nested loops
- Fundamentals and advanced concepts of functions, including their declaration, definition, and prototypes
- The scope of variables within functions
- Usage of gcc compilation flags: `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, `-std=gnu89`
- The role and implementation of header files using `#include`

## Requirements

### General
- **Allowed editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS using gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- Adherence to the Betty coding style is required, and will be checked using `betty-style.pl` and `betty-doc.pl`
- Use of global variables is prohibited
- A maximum of 5 functions per file is allowed
- Use of standard library functions such as `printf`, `puts`, etc., is forbidden; `_putchar` is permitted
- `_putchar.c` need not be pushed, as a custom file will be used during compilation
- Function prototypes must be included in your header file named `main.h`

## More Info

- Understanding of complex topics like memory management, recursion, and array usage is not required at this stage.
- Participants are encouraged to focus on mastering the concepts of loops and functions to effectively handle structured data manipulation.

## Quiz Questions
### Questions and Correct Answers
1. **What is the output of the following piece of code?**
   
   int i = 9;
   while (--i) {
       printf("%d", i);
   }
   
   **Correct Answer:** 87654321

2. **What is the output of the following piece of code?**
   
   int i;
   for (i = 0; i < 10; i++) {
       printf("%d", i * 2);
   }
   
   **Correct Answer:** 024681012141618

3. **What is the output of the following piece of code?**
   
   int i;
   for (i = 48; i < 58; i++) {
       printf("%c", i);
   }
   
   **Correct Answer:** 0123456789

4. **What is the return value of the following function?**
   
   int some_function(void) {
       int i;
       for (i = 0; i < 10; i++) {
           printf("%d", i);
       }
       return(i);
   }
   
   **Correct Answer:** 10

5. **What is the output of the following piece of code?**
   
   int i = 9;
   while (i--) {
       printf("%d", i);
   }
   
   **Correct Answer:** 876543210

6. **What is the output of the following piece of code?**
   
   int i = -9;
   while (i < 0) {
       printf("%d", -i);
       i++;
   }
   
   **Correct Answer:** 987654321

7. **What is the output of the following piece of code?**
   
   int i = 0;
   while (i < 10) {
       printf("%d", i % 2);
       i++;
   }
   
   **Correct Answer:** 0101010101

8. **What is the return value of the following function?**
   
   int some_function(void) {
       printf("%d", 12);
       return (98);
   }

    **Correct Answer:** 98

9. **What is the output of the following piece of code?**
   
   int i = 0;
   while (i < 10) {
       i++;
       printf("%d", i / 2);
   }
   ```
   - **Correct Answer:** 0112233445

