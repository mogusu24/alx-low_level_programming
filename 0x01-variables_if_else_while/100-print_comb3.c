#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of
 * two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;
	int digit1;

	for (digit = 0; digit < 9; digit++)
	{
		for (digit1 = digit + 1; digit1 < 10; digit1++)
		{
			putchar((digit % 10) + '0');
			putchar((digit1 % 10) + '0');

			if (digit != 9 && digit1 != 10)
			{	
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
