#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - get_op_func performs calculator
 * if not 4 arguments, return Error and exit 98
 * if op is null, return Error and exit 99
 * if div or mod are 0, return Error and exit 100
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
	return (0);
}
