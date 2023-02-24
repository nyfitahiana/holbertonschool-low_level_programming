#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: is the integer for the parameters of my function
 * Return: 0
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
