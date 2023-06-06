#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Input string.
 *
 * This function takes a string as input and encodes
 * it into 1337 according to the following rules:
 * - Letters 'a' and 'A' are replaced by '4'.
 * - Letters 'e' and 'E' are replaced by '3'.
 * - Letters 'o' and 'O' are replaced by '0'.
 * - Letters 't' and 'T' are replaced by '7'.
 * - Letters 'l' and 'L' are replaced by '1'.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = "AEOTL";
	char leet_nums[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
				str[i] = leet_nums[j];
		}
	}

	return (str);
}
