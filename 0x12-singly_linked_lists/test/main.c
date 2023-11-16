#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../lists.h"

int main(void)
{
    list_t *head;
    size_t n;

    head = NULL;
    add_node(&head, "World");
    add_node(&head, "Hello");
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free_list(head);

    return (0);
}
