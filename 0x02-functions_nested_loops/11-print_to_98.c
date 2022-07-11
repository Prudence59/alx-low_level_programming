#include "main.h"
/**
 *  * print_to_98 - from n to 98
 *   * @n: integer
 *    *
 *     * Return: this function print from n to 98
 */
void print_to8_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);

if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
}

