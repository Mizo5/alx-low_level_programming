#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i < 1000)
	{
		int firstDigit = i / 100;
		int secondDigit = (i / 10) % 10;
		int thirdDigit = i % 10;

		if (firstDigit < secondDigit && secondDigit < thirdDigit)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');
			putchar(thirdDigit + '0');

			if (i < 789)
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
