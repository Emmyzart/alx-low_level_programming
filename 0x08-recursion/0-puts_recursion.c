#include "main.h"

/**
 * _print_rev_recursion(char *s) - entry point
 * @*s - string
 * Return: none
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
