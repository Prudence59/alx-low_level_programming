#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function that prints sum of all its parameters
 * @unsigned int n : type and amount of argument
 * @sum : adds up parameter
 *
 * Return : sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list prudence;
	unsigned int i;

	int sum = 0;

	if (n == 0)
		return (0);

	va_start(prudence, n);  /*initializes the argument of list*/

	for (i = 0; i < n; i++)
		sum += va_arg(prudence, int);
	va_end(prudence);

		return (sum);

}


