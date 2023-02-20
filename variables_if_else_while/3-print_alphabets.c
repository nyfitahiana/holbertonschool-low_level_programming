#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>                                              
/* betty style doc for function main goes there */
/**
 ** main - the alphabet in lowercase and in uppercase
 *
 ** Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);                       
}                                                               
