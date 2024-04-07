0;10;1c# 0x13. C - More Singly Linked Lists

## Project Overview

This project was completed as part of the ALX Software Engineering program. The focus was on advancing the understanding and practical application of singly linked lists in C programming.

## Learning Objectives

By the end of this project, students are expected to be able to:

- Utilize singly linked lists effectively in C programming.
- Independently seek and utilize technical information.

## Requirements

- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: gcc using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style**: Betty style

## Allowed Functions

- `malloc`
- `free`
- `exit`
- `_putchar` (provided by ALX)

## Files

All files must end with a new line. The `main.c` files used for testing (not provided) include the header file `lists.h` which contains the prototypes of all functions used in the project.

### Data Structure Used

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
