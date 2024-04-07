# 0x05. C - Pointers, arrays and strings

This project is part of the ALX School curriculum for learning low-level programming. It focuses on the concepts of pointers, arrays, and strings in C, essential for deeper understanding of memory management and data structures.

## Project Details
**Weight:** 1  
**Project date:** Oct 16, 2023, 6:00 AM to Oct 17, 2023, 6:00 AM  
**Deadline:** Auto review will be launched at the deadline

## Resources
### Read or watch:
- [C - Arrays](#)
- [C - Pointers](#)
- [C - Strings](#)
- [Memory Layout](#)

### Additional Resource
- [Arrays & Pointers in C Programming Explained](#)

## Learning Objectives
At the end of this project, you should be able to explain to anyone, without the help of Google:
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## General Requirements
- **Allowed editors:** vi, vim, emacs
- **Compilation:** All files will be compiled on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style:** Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- **Restrictions:** 
  - No global variables
  - No more than 5 functions per file
  - No use of the standard library. Functions like `printf`, `puts`, etc., are forbidden
- **Usage of `_putchar`:** You are allowed to use `_putchar`
- **Header File:** All your function prototypes should be included in your header file called `main.h`

## More Info
You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, malloc and free - yet.

## Quiz Questions
Below are some quiz questions to test your understanding of the concepts:

1. **Illegal Memory Access:** What happens when one tries to access an illegal memory location?
   - Segmentation fault is a common outcome, signaling an invalid access to memory.

2. **Array Access:** What is the equivalent of typing `arr[2]`?
   - It is equivalent to `*(arr + 2)`, accessing the third element in the array `arr`.

3. **Pointer Increment:** After executing `*p++`, what remains the value of the pointed integer if `p` is a pointer initialized to the address of `n` with `n = 98`?
   - The value of `n` remains 98.

4. **Pointer Size:** What is the size of a pointer to a char on a 64-bit architecture?
   - 8 bytes.

5. **Dereferencing:** The process of getting the value at the memory location pointed to by a pointer is called dereferencing.

### Header File
Remember to push your `main.h` header file and ensure it contains all the prototypes of the functions used and the `_putchar` prototype.

Happy coding!
