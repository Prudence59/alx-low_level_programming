#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings
 *
 * @separator:string to be printed between the strings
 *
 * @n : number of strings passed to the function
 *
 * Return : void
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		n = str;
		str = va_arg(valist, char *);
	if (str)
		printf("%s", str);
	else
		printf("(nil)");
	if (separator && i < n - 1)
		printf("%s", separator);
	}
		printf("\n");

		va_end(valist);
}


