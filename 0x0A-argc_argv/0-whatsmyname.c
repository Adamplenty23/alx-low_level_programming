#include "main.h"

/**
 * main - a program that prints its name
 *
 * @argv: array of the commands
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
