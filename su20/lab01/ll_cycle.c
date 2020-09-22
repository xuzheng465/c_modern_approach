#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head)
{
    /* your code here */
    node *tortoise = head;
    node *hare = head;
    if (head == NULL)
        return 0;
    while (hare->next->next != NULL)
    {
        if (hare == tortoise)
            return 1;
        hare = hare->next->next;
        tortoise = tortoise->next;
    }
    return 0;
}