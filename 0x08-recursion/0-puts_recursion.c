#include "main.h"

/**
 * main -function that prints a string
 * @main: followed by a new line
 *
 * Return : Always 0
 */
void _puts_recursion(char *s);
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
