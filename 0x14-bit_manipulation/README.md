# 0x14. C - Bit manipulation

## Project Overview
This project focuses on the understanding and application of bit manipulation techniques in C programming. It took place from November 23 to November 24, 2023, and involved comprehensive tasks that required manipulating bits directly using bitwise operators.

## Objectives

### Learning Goals
- Understand and apply bit manipulation techniques.
- Utilize bitwise operators to perform operations like AND, OR, XOR, NOT, and bit shifting.
- Enhance problem-solving skills in contexts where low-level operations on bits are required.

### Skills Developed
- Bitwise operations
- Efficient data handling and manipulation
- Precision in control over data representation and memory

## Resources

### Recommended Reading and Watching:
- [Operators in C - Part 6 & 7](https://www.youtube.com/)
- [Bitwise Operators 1-4: Operations](https://www.youtube.com/)
- [Bit Manipulation Tutorial](https://www.geeksforgeeks.org/bitwise-operators-in-c/)
- [Google and YouTube for additional tutorials and explanations](https://www.google.com)

### Man Pages:
- `man 2 bitops`

## Requirements

### General Conditions
- **Compilers**: GCC 4.8.4 using flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code Style**: Betty style for C programming
- **Restrictions**:
  - No global variables allowed.
  - No more than 5 functions per file.
  - Allowed functions: `malloc`, `free`, `exit` (standard library restrictions apply).
  - No custom unchecked memory management functions.
  - Header files must be guarded.

### GitHub Requirements
- A single repository for collaborative work.
- Include a comprehensive `README.md` file.
- Include a header file `main.h` with all function prototypes.

## Environment Setup
- All development and testing were performed on Ubuntu 20.04 LTS.
- Utilized `valgrind` for memory leak checks and debugging.

## Practical Applications
- Developing embedded systems software.
- Creating systems with optimized memory usage.
- Security systems where data manipulation at the bit level is crucial.

## Examples
Here is an example of how to set, clear, and toggle bits in a number using bitwise operators:

```c
#include <stdio.h>
#define SET_BIT(n, pos) (n |= (1U << pos))
#define CLEAR_BIT(n, pos) (n &= ~(1U << pos))
#define TOGGLE_BIT(n, pos) (n ^= (1U << pos))

int main() {
    unsigned int num = 4; // binary: 0000 0100
    SET_BIT(num, 1);     // result: 0000 0110
    CLEAR_BIT(num, 2);   // result: 0000 0010
    TOGGLE_BIT(num, 1);  // result: 0000 0000
    printf("Result: %u\n", num);
    return 0;
}

# Quiz Questions for Bit Manipulation Project

## Question #0
What does `0x89 & 0x01` equal to?

- 0x01

## Question #1
What is 98 in base 2?

- 0b01100010

## Question #2
What is `~0x12` equal to?

- 0xED

## Question #3
What is `0b001010010` in base 10?

- 82

## Question #4
What does `0x01 << 1` equal to?

- 0x02

## Question #5
What does `0x13 << 1` equal to?

- 0x26

## Question #6
What does `0x01 & 0x00` equal to?

- 0x00

## Question #7
What does `0x01 & 0x01` equal to?

- 0x01

## Question #8
What does `0x02 >> 1` equal to?

- 0x01

## Question #9
What does `0x44 | 0x22` equal to?

- 0x66

# Question #10
What is 98 in base 16?

- 0x62

## Question #11
What does `0x66 & 0x22` equal to?

- 0x22

## Question #12
What does `0x89 >> 3` equal to?

- 0x11

## Question #13
What does `0x01 | 0x01` equal to?

- 0x01

## Question #14
What does `~0x98` equal to?

- 0x67

## Question #15
What does `0x88 & 0x01` equal to?

- 0x00

## Question #16
What is `0x89` in base 10?

- 137

## Question #17
What is `0b01101101` in base 16?

- 0x6D

## Question #18
What does `0x01 | 0x00` equal to?

- 0x01

## Question #19
What is `0x89` in base 2?

- 0b10001001
