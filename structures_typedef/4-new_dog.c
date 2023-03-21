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
	int a, b, c, d;
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
	return (NULL);
	}

	a = strlen(name);
	p->name = malloc(a + 1);

	b = strlen(owner);
	p->owner = malloc(b + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p);
		return (NULL);
	}

	for (c = 0; c < a; c++)
	{
		*(p->name + c) = *(name + c);
	}
	*(p->name + a) = '\0';

	for (d = 0; d < b; d++)
	{
		*(p->owner + d) = *(owner + d);
	}
	*(p->owner + a) = '\0';

	p->age = age;

	return (p);
}
