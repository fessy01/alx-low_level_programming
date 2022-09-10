#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive: %d\n", n);
	}
	else if (n == 0)
	{
		printf("n is zero: %d\n", n);

	}
	else
	{
		printf("n is negative: %d\n", n);
	}
	return (0);

}
