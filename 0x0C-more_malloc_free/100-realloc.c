#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the old memory block in bytes
 * @new_size: Size of the new memory block in bytes
 *
 * Return: Pointer to the reallocated memory block
 *         If new_size == old_size, returns ptr
 *         If ptr is NULL, equivalent to malloc(new_size)
 *         If new_size is zero and ptr is not NULL,
 *         equivalent to free(ptr) and returns NULL
 *         If malloc fails, returns NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
			return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
