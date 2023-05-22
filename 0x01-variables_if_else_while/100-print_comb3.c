#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		int firstDigit = i / 10;
		int secondDigit = i % 10;

		if (firstDigit < secondDigit)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}

	putchar('\n');

	return (0);
}
