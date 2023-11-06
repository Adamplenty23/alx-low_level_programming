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
	argc = 1;

	while (argv[argc] != NULL)
	{
		printf("%s\n", argv[argc]);
		argc++;
	}
	return (0);
}
