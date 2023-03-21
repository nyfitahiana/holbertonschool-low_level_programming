#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, i;
	dog_t *p;

	a = b = 0;
	while (name[a++])
		;
	while (owner[b++])
		;
	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
	return (NULL);
	}

	p->name = malloc(a * sizeof(p->name));

	p->owner = malloc(b * sizeof(p->owner));

	if (p->name == NULL || p->owner == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < a; i++)
		p->name[i] = name[i];

	for (i = 0; i < b; i++)
		p->owner[i] = owner[i];

	p->age = age;

	return (p);
}

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
