#include "main.h"

/**
 * isupper.c -a function tgat checks uppercase letters
 *
 * Returns: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
