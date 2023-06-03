#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: input parameter 1
 *
 * @b: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
