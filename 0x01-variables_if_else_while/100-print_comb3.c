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

	for (digit = 0; digit < 90; digit++)
	{
		putchar((digit / 10) + '0');
		putchar((digit % 10) + '0');
		if (digit != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
