#include "main.h"

/**
 * print_numbers - print the number from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	char ch;

	ch = '0';

	for (ch <= 9; ch++)
	{
		_putchar(ch);

	}
	_putchar('\n');

}
