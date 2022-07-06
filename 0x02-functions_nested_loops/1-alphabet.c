#include "main.h"

/**
 * main - program that prints the alphabet in lowercase
 * Description: the line is followed is followed new line
*Return: Always 0(success)
*/
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)

	_putchar(c);

	_putchar('\n');
}
