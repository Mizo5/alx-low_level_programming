#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 *
 * Description: This function prints the content
 * of the buffer, showing 10 bytes
 * per line. Each line starts with the
 * position of the first byte of the line in
 * hexadecimal (8 chars), followed by the hexadecimal content (2 chars) of the
 * buffer, 2 bytes at a time, separated by a space. The function also shows the
 * ASCII representation of the content. If a byte is a printable character, it
 * is printed as the character itself,
 * otherwise, a dot (.) is printed. Each line
 * ends with a new line (\n). If size is 0 or less,
 * the output is a new line only.
 * This function assumes the buffer is valid
 * and has at least the specified size.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				break;

			if (b[i + j] >= 32 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}
