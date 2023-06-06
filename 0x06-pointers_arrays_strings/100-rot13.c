#include <stdio.h>
#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: Input string.
 *
 * This function takes a string as input and
 * applies the ROT13 algorithm to encode it.
 * ROT13 replaces each letter with the letter 13 positions
 * ahead (wrapping around the alphabet if necessary).
 * Non-alphabetic characters are left unchanged.
 *
 * Return: A pointer to the modified string.
 */

char *rot13(char *str)
{
	char *ptr = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
		}
		else if
			((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] -= 13;
		}
	}

	return (ptr);
}
