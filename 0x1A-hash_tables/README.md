# 0x1A. C - Hash tables

## Overview
This project introduces the concepts and implementations of hash tables, focusing on their mechanics, usage, and common applications. Students will explore hash functions, collision resolution techniques, and the benefits and drawbacks of using hash tables.

## Learning Objectives
- Understanding what a hash function is and what makes a good hash function.
- Comprehensive knowledge about hash tables, including their operation and practical applications.
- How to handle collisions in hash tables using chaining among other methods.
- The advantages and potential disadvantages of using hash tables.
- Practical uses of hash tables in software development.

## Requirements
- **Environment:** Compiled on Ubuntu 20.04 LTS using gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **Submission:** All files should terminate with a new line.
- **Compilation:** `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
- **Coding Style:** Code should adhere to Betty style and documentation guidelines.

## Data Structures
For this project, use the following data structures included in your `hash_tables.h` header file:
```c
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string - The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
