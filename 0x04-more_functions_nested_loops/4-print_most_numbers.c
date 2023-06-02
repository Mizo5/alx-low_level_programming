#include "main.h"

/**
 * print_most_numbers - print 0 - 9 without 2 and 4 using _putchar twice.
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + '0');
	}
	_putchar('\n');
}
