#include "dog.h"
#include <stdlib.h>
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
                free(d->owner);;
                free(d->name);
                free(d);
        }
}              
