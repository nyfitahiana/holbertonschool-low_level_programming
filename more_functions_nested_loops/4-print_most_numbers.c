#include "main.h"
/**
 * print_most_numbers - function that prints most of the numbers
 * Return: 0
 */
void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
	if (c != '2' && c != '4')
	{
	_putchar(c);
	}
	c++;
	}
_putchar('\n');
}
