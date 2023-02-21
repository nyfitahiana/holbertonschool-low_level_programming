#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);
#endif /* MAIN_H */
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
