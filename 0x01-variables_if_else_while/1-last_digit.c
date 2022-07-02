#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a number is zero or not.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n <=0)
{
        printf("%d is %s\n", n, "and is 0");
}
else if (n > 5)
{
        printf("%d is %s\n", n, "and is greater than n");
}
else
{
        printf("%d is %s\n", n, "and is less than 6 and not 0");
}
return (0);
}


