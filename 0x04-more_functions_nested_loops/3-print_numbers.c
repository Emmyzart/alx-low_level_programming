#include "main.h"

/**
 * print_numbers - print numbers form 0 to 9
 * _putchar - reference
 * Return: none
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c < '10'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
