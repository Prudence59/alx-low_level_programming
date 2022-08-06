#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @string : string is followed by a new line
 * @separator:string to be printed between the strings
 * @n : number of strings passed to the function
 * Return : void
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list valist;
	unsigned int i;
	char *num;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, char);
	if (num)
		printf("%s", num);
	else
		printf("(nil)");
	if (separator && i < n - 1)
		printf("%s", separator);
	}
		printf("\n");

		va_end(valist);
}


