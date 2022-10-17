#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	char y = 'Z';

	while (y >= 'A')
	{
		putchar(y);
		y--;
	}
	putchar('\n');
	return (0);
}
