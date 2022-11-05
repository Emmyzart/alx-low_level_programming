#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: the argument count
 * @argv: the argume vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	while (argc--)
{
		printf("%s\n", *argv++);
}
	exit(EXIT_SUCCESS);
}
