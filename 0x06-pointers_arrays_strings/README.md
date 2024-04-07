# 0x06. C - More Pointers, Arrays and Strings

## Project Details
**Weight:** 1  
**Project Dates:** Oct 18, 2023, 6:00 AM to Oct 20, 2023, 6:00 AM  
**Deadline:** An auto review will be launched at the deadline

## Additional Resource
- [Practical Use of Pointers in C Programming](#)

## Learning Objectives
By the end of this project, you should be able to explain:
- How to use pointers and what they are
- How to use arrays and what they are
- The differences between pointers and arrays
- How to manipulate strings using pointers
- The scope of variables in programs

## General Requirements
- **Allowed Editors:** vi, vim, emacs
- **Compilation:** All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style:** Code should adhere to Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- **Restrictions:** 
  - No global variables
  - No more than 5 functions per file
  - No use of the standard library, including functions like `printf`, `puts`, etc.
  - Usage of `_putchar` is allowed
  - Do not push `_putchar.c`; it will be provided during compilation
- **Documentation:** A `README.md` file, at the root of the folder of the project, is mandatory
- **Header File:** All function prototypes must be included in a header file called `main.h`

## Quiz Questions
Here are some conceptual questions to test foundational understanding:

1. **Dereferencing NULL:** What is the result of dereferencing a NULL pointer?
   - Segmentation fault

2. **Array Indexing Error:** What is incorrect about using `array[n] = i;` immediately after declaring `int array[n];`?
   - It is not possible to access `array[n]` as it is beyond the array's memory bounds.

3. **String Variable Type:** What is the type of `var` after `var = "Best";`?
   - `char *`

4. **Differences in Pointer Initialization:**
   - `char *s1 = "";` points to a zero-byte (terminator for strings), while `char *s2 = NULL;` points to memory location 0 (cannot be dereferenced).

5. **Importance of Null Byte:** Why reserve an extra character when declaring or allocating a string?
   - To accommodate the null byte (`\0`), which marks the end of the string.

6. **Array Assignment Validity:** Is there a problem with setting `array[n] = i;` for an array declared as `int array[10];` and `n = 5;`?
   - No, this is a valid operation as `n` is within the array's bounds.

7. **Potential Array Error:** What's the issue with `array[n] = i;` for `int array[5];` and `n = 5;`?
   - `n = 5` is out of bounds for this array size, resulting in undefined behavior or a segmentation fault.

These questions encourage a deeper understanding of critical concepts in C programming, vital for effective software development.

### Header File Reminder
Ensure to include and push your `main.h` header file, which should list all necessary function prototypes, including that of `_putchar`.

Happy Coding!
