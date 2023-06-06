#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 *
 * This function prints an integer to the
 * standard output using the _putchar function.
 * It does not use long, arrays, pointers, or hard-coded special values.
 *
 * Note: This implementation assumes that
 * the integer can be represented by type int.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
