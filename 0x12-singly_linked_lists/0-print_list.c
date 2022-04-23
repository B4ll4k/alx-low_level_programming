#include <stdlib.h>
/**
* print_list - prints all the nodes in singly linked list
* @h: linked list to be printed
*
* Return - the number of nodes
*/
unsigned long print_list(const list_t *h)
{
    unsigned long nodes = 0;
    list_t *next = &h;

    while (next != NULL)
    {
        if (next->str != NULL)
            printf("[%d] %s", next->len, next->str);
        else
            printf("[0] (nil)");

        nodes++;
        next = next->next;
    }

    return nodes;

}