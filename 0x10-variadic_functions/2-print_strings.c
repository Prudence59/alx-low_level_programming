#include "variadic_functions.h"
#include <stdio.h>

/**
 * 2_print_strings - function that prints strings
 * @string : string is followed by a new line
 * @separator:string to be printed between the strings
 * @n : number of strings passed to the function
 * Return : void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for(i = 0; i < n; i++)
	{
		printf("%d\n",separator);

