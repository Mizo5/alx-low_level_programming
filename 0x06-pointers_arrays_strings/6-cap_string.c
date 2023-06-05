#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether a character is lowercase.
 *
 * @c: character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether a character is a delimiter.
 *
 * @c: character to check
 *
 * Return: 1 if the character is a delimiter, 0 otherwise.
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: input string
 *
 * Return: string with capitalized words.
 */

char *cap_string(char *s)

{
	char *ptr = s;
	int foundDelimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimiter = 1;
		else if (isLower(*s) && foundDelimiter)
		{
			*s -= 32;
			foundDelimiter = 0;
		}
		s++;
	}
	return (ptr);
}
