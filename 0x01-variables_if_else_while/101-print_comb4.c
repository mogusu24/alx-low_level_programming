#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of
 * three digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit, digit1, digit2;

	for (digit = 0; digit < 8; digit++)
	{
		for (digit1 = digit + 1; digit1 < 9; digit1++)
		{
			for (digit2 = digit1 + 1; digit2 < 10; digit2++)
			{
				putchar((digit % 10) + '0');
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');

				if (digit == 7 && digit1 == 8 && digit2 == 9)
					continue;
				putchar(',');
				putchar(' ');

			}
		}
	}

	putchar('\n');

	return (0);
}
