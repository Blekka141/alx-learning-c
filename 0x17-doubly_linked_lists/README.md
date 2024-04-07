# 0x17. C - Doubly Linked Lists

## Project Overview

This project was part of the ALX Software Engineering curriculum, focusing on understanding and implementing doubly linked lists in C.

## Learning Objectives

By the end of this project, students are expected to:

- Understand what a doubly linked list is and how it differs from singly linked lists.
- Implement operations such as insertion, deletion, and traversal on doubly linked lists.
- Independently find resources and information relevant to doubly linked lists.

## Requirements

- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style**: Betty style

## Allowed Functions

- `malloc`
- `free`
- `printf`
- `exit`

## Data Structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
