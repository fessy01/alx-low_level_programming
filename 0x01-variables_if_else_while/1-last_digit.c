#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine either greater than 5, is less than 6, or is 0
 *
 * Return: 0
 */

int main(void)
{
	int n, 1_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1_num = n % 10;
	if (1_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1_num);
	}
	else if (1_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, 1_num);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1_num);
	}
	return (0);


}
