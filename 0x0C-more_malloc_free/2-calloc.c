#include "main.h"

/**
 * *_memset - Fills memory with a constant byte.
 * @s: Pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - Allocates memory for an array and initializes it with zeros
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory
 *         If nmemb or size is 0, or if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == NULL)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
