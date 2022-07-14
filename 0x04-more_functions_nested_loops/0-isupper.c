#include "main.h"

/**
 * isupper.c -a function tgat checks uppercase letters
 *
 * Returns: Always 0
 */
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;

for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
