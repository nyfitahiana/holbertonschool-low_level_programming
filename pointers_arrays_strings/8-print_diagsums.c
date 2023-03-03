#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals of a square
 * @a: doc line
 * @size: size of the array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
