#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * _multiply - Multiplies two numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The product of num1 and num2
 */
char *_multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	int i, j, k, carry, digit;
	int *result;
	char *product;

	result = calloc(len, sizeof(int));
	if (result == NULL)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = digit / 10;
			result[i + j + 1] = digit % 10;
		}
		result[i + j + 1] += carry;
	}
	k = 0;
	while (k < len && result[k] == 0)
		k++;
	if (k == len)
		k--;
	product = malloc((len - k + 1) * sizeof(char));
	if (product == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = k, j = 0; i < len; i++, j++)
		product[j] = result[i] + '0';
	product[j] = '\0';
	free(result);
	return (product);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	while (*num1)
	{
		if (!_isdigit(*num1))
		{
			printf("Error\n");
			return (98);
		}
		num1++;
	}
	while (*num2)
	{
		if (!_isdigit(*num2))
		{
			printf("Error\n");
			return (98);
		}
		num2++;
	}
	product = _multiply(argv[1], argv[2]);
	if (product == NULL)
	{
		printf("Error\n");
		return (98);
	}
	printf("%s\n", product);
	free(product);
	return (0);
}
