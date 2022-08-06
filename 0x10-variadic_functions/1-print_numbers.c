#include "variadic_functions.h"
#include <stdio.h>

/**
*print_numbers - function that prints numbers
*@n : number of integers passed to the function
*@separator : string to be printed between numbers
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list valist;
	unsigned int i;
	int num;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);

		if (separator && i < n - 1)

			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}

