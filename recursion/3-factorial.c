#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: the given number
 * Return: the factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
