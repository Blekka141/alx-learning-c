#include <unistd.h>

/**
 * _puts - Print a string to the standard output.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
    char *current = str;

    while (*current)
    {
        write(1, current, 1);
        current++;
    }
}
