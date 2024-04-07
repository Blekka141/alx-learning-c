# 0x15. C - File I/O

## Overview
This project dives into the file input/output operations using system calls in C. It covers creating, opening, reading, writing, and closing files using file descriptors.

## Learning Objectives
- Understand and explain the use of system calls such as open, close, read, and write.
- Recognize and utilize file descriptors, including the standard file descriptors (STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO).
- Implement file operations using flags like O_RDONLY, O_WRONLY, O_RDWR.
- Set file permissions accurately using the open system call.
- Differentiate between functions and system calls.

## Resources
- **File descriptors**: Overview and detailed usage
- **[C Programming Tutorial - open(), read(), write() Functions](https://www.example.com)**

## man or help:
- `open`
- `close`
- `read`
- `write`
- `dprintf`

## Requirements
- **Programming Languages**: C
- **Compiler**: gcc, flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style**: Code should follow the Betty style.

## Environment
- **OS**: Ubuntu 20.04 LTS
- **Editor**: vi, vim, emacs

## Compilation
Your code will be compiled in this way:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o your_output_name
