# 0x12. C - Singly linked lists

## Overview

This project, running from November 16 to November 17, 2023, focuses on the implementation and understanding of singly linked lists in C programming. Achieving a perfect score across mandatory and optional evaluations, it emphasizes the practical and theoretical aspects of linked list structures.

## Learning Objectives

Upon completion of this project, learners should be able to:

- **Compare and Contrast**: Understand when and why to use linked lists over arrays.
- **Implementation**: Know how to build and effectively utilize linked lists in data structure management.

## Resources

- **Linked Lists**: Comprehensive materials to understand the basic and advanced concepts of linked lists.
- **Search Engines**: Utilization of Google and YouTube for supplementary learning materials.

## Requirements

- **Editors**: vi, vim, or emacs.
- **Operating System**: Ubuntu 20.04 LTS.
- **Compiler**: gcc using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- **Code Style**: Adherence to Betty coding style.
- **Restrictions**:
  - No global variables.
  - A maximum of 5 functions per file.
  - Use only `malloc`, `free`, and `exit` from the C standard library.
- **Output**:
  - All functions must be prototype in `lists.h` and include-guarded.
  - `_putchar` is provided for output, not to be pushed by students.

## Struct Definition

Use the following structure for linked list nodes in this project:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

## Quiz 

**Question #0**: What’s the “tail” of a linked list?
- **Answer**: It’s the node with the pointer to the next equals to NULL.

**Question #1**: What’s a node? (select all possible answers)
- **Answer**: 
  - It’s a structure with a pointer to the next node and value information.
  - It’s a space allocated in memory.

**Question #2**: Arrays Vs Linked Lists: select all true statements
- **Answer**:
  - We can add elements indefinitely to a linked list.
  - We can easily remove an element from a Linked list.
  - Array can contain as value a structure.
  - Memory is aligned for an Array - each elements are back to back in the memory.
  - Linked list can contain as value a structure.

**Question #3**: What’s the “head” of a linked list?
- **Answer**: It’s the first node.

**Question #4**: In a singly linked list, what are possible directions to traverse it? (select all possible answers)
- **Answer**:
  - Forward.

