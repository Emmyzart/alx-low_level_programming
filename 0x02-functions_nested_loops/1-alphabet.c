#include "main.h"
/**
 * print_alphabet- entry point of the program
 *
 * Return: 1
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z';)
	{
		_putchar(c);
	}
	c++;

	_putchar('\n');
}
