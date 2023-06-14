#include "main.h"

/**
 * create_array - Creates an array of chars.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (NULL);

	while (size--)
		n[size] = c;

	return (n);
}
