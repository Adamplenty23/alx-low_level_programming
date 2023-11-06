#include "main.h"

/**
 * main - a program that prints its name
 *
 * @argc: number of command lines
 * @argv: array of the commands
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	argc = 0;
	i = 0;
	while (argv[i] != NULL)
	{
		argc++;
		i++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
