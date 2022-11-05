#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the argument count
 * @argv: the argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
