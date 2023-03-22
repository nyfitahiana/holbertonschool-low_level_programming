#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: the pointer
 * @size: the size of the array
 * @action: pointer of the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
