#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: takes number input.
 *
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int num, mult;

		int prod;

		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
