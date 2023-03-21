#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees a dog structure
 * @d: pointer to dog structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
        if (d != NULL)
        {
                free(d->name);
                free(d->owner);
                free(d);
        }
}
-- INSERT --              
