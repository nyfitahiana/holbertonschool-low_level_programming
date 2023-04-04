#include "lists.h"

size_t list_len(const list_t *head)
{
    size_t count = 0;
    const list_t *current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}

