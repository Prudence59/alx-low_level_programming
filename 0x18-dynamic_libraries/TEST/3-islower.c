#include "main.h"
/**
*_islower -check if a character is lowercase.
*@c: The character to be checked.
*
* Return: 1 if character is lowercase, o otherwise.
*/

int _islower(int c)
{
char i;
int lower = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}

return (lower);
}
