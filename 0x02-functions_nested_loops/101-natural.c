#include <stdio.h>

/**
 *  * main - prints all possible different combinations of three digits
 *   * Return: Always 0 (Success)
 */
int main(void)
{
	int a, j;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			j += a;
	}
	printf("%d\n", j);
	return (0);
}
