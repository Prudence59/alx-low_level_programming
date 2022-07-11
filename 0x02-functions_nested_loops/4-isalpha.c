#include "main.h"
/**
 *  * _isalpha - check a letter
 *   *
 *    * @c: letter u other
 *     *
 *      *Return: 1 if is letter 0 others
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
