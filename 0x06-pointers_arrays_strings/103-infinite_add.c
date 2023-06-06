#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int get_number_length(char *number);
int is_valid_result(int len1, int len2, int size_r);
void reverse_string(char *str, int len);
void shift_string_left(char *str, int len);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * get_number_length - Calculates the length of a number string
 * @number: Number string
 *
 * Return: Length of the number string
 */
int get_number_length(char *number)
{
	int length = 0;

	while (number[length] != '\0')
		length++;

	return (length);
}

/**
 * is_valid_result - Checks if the result can be stored in the buffer
 * @len1: Length of n1
 * @len2: Length of n2
 * @size_r: Size of the buffer
 *
 * Return: 1 if the result is valid, 0 otherwise
 */
int is_valid_result(int len1, int len2, int size_r)
{
	return (len1 < size_r && len2 < size_r);
}

/**
 * reverse_string - Reverses a string
 * @str: String to reverse
 * @len: Length of the string
 */
void reverse_string(char *str, int len)
{
	int i, j;
	char temp;

	i = 0;
	j = len - 1;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;

		i++;
		j--;
	}
}

/**
 * shift_string_left - Shifts a string one position to the left
 * @str: String to shift
 * @len: Length of the string
 */
void shift_string_left(char *str, int len)
{
	int i;

	for (i = 1; i < len; i++)
		str[i - 1] = str[i];

	str[len - 1] = '\0';
}

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r), or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, sum, carry;

	len1 = get_number_length(n1);
	len2 = get_number_length(n2);

	if (!is_valid_result(len1, len2, size_r))
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	carry = 0;

	while (i >= 0 || j >= 0)
	{
		sum = carry;

		if (i >= 0)
			sum += (n1[i] - '0');

		if (j >= 0)
			sum += (n2[j] - '0');

		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j--;
		k++;
	}

	if (carry)
	{
		if (k >= size_r - 1)
			return (0);

		r[k] = carry + '0';
		k++;
	}

	r[k] = '\0';

	reverse_string(r, k);

	if (k > 1 && r[0] == '0')
		shift_string_left(r, k);

	return (r);
}
