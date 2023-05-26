#include "main.h"

/**
 * print_alphabet - prints in lowercase using the _putchar function.
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
