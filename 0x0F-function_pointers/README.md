 0x0F. C - Function pointers
C

    Weight: 1
    Project over - took place from Nov 8, 2023 6:00 AM to Nov 9, 2023 6:00 AM
    An auto review will be launched at the deadline

In a nutshell…

    Auto QA review: 38.0/39 mandatory & 7.0/7 optional
    Altogether:  194.88%
        Mandatory: 97.44%
        Optional: 100.0%
        Calculation:  97.44% + (97.44% * 100.0%)  == 194.88%

Resources

Read or watch:

    Function Pointer in C
    Pointers to functions
    Function Pointers in C / C++
    why pointers to functions?
    Everything you need to know about pointers in C

Additional Resources

    Function pointers in C Programming & How to use them

Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
General

    What are function pointers and how to use them
    What does a function pointer exactly hold
    Where does a function pointer point to in the virtual memory

Copyright - Plagiarism

    You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
    You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
    You are not allowed to publish any content of this project.
    Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
General

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
    You are allowed to use _putchar
    You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
    Don’t forget to push your header file
    All your header files should be include guarded

Quiz questions
Great! You've completed the quiz successfully! Keep going! (Hide quiz)
Question #0

If f is a pointer to a function that takes no parameter and returns an int, you can call the function pointed by f this way (check all correct answers if there is more than one):

    f;

    f();

    (*f)();

Question #1

Which one is a pointer to a function?

    int (*func)(int a, float b);

Question #2

What does a pointer to a function point to (check all correct answers if there is more than one)?

    The first byte of code of the function

    code

Question #3

To store the address of this function:

void neyo(void);

to the variable f of type pointer to a function that does not take any argument and does not return anything, you would do (check all correct answers if there is more than one):

    f =  neyo;
    f = &neyo;

Question #4

This void (*anjula[])(int, float) is:

     An array of pointers to functions that take an int and a float as para	meters and returns nothing

