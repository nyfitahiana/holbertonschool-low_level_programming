#include "main.h"
#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argv: the array of strings containing the arguments
 * @argc: the number of arguments
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}