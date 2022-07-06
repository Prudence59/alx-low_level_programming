#include "main.h"

/**
 *  *print_alphabet - Alphabet in lowercase
 *   *
 *    *Return:0
 *    *
 */
void print_alphabet(void)
{
	int r;

for (r = 'a'; r <= 'z'; r++)
{
_putchar(r);
(r++);
}
_putchar('\n');
return (0);
}
