# 0x09. C - Static libraries

This project in the ALX School curriculum introduces the fundamentals of static libraries in C programming. Static libraries are collections of object files that can be linked into executables by a linker, allowing code to be reused across multiple programs without redundancy.

## Project Details
**Weight:** 1  
**Project Duration:** Oct 27, 2023, 6:00 AM to Oct 28, 2023, 6:00 AM  
**Deadline:** An auto review will be launched at the deadline

## Resources

### Read or watch:
- [What Is A "C" Library? What Is It Good For?](#)
- [Creating A Static "C" Library Using "ar" and "ranlib"](#)
- [Using A "C" Library In A Program](#)
- [What is difference between Dynamic and Static library (Static and Dynamic linking)](#) (Stop at 4:44)

### Man or help:
- `ar`
- `ranlib`
- `nm`

### Additional Resource
- [Static Libraries: How to Create & Use them in C programming](#)

## Learning Objectives
By the end of this project, you should be able to explain:
- What a static library is and how it works
- Steps to create and use a static library
- Basic usage of `ar`, `ranlib`, `nm`

## General Requirements
- **Allowed Editors:** vi, vim, emacs
- **Compilation:** All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style:** Code should adhere to Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- **Restrictions:** 
  - No global variables
  - No more than 5 functions per file
  - No use of the standard library. Functions like `printf`, `puts`, etc. are forbidden
  - Use of `_putchar` is allowed
- **Documentation:** A `README.md` file, at the root of the folder of the project, is mandatory
- **Header File:** All function prototypes must be included in your header file called `main.h`

## Bash Requirements
- **Allowed Editors:** vi, vim, emacs
- **Scripts tested on:** Ubuntu 20.04 LTS
- **Script guidelines:** 
  - Files must end with a newline
  - Scripts should start with `#!/bin/bash`
  - Descriptions for each script should be included in the `README.md`
  - All files must be executable

## Quiz Questions
Explore these questions to deepen your understanding of static libraries:

1. **Listing Symbols:** Which command can be used to list the symbols stored in a static library?
   - Answer: `nm`

2. **Creating Libraries:** What command is used to create a static library from object files?
   - Answer: `ar`

3. **Using Ranlib:** What is the purpose of using `ranlib`?
   - Answer: Indexing an archive to speed up access to it

4. **Library Format:** What is the format of a static library?
   - Answer: An archive

### Header File Reminder
Ensure to include and push your `main.h` header file, which should list all necessary function prototypes, including that of `_putchar`.

Happy Coding!
