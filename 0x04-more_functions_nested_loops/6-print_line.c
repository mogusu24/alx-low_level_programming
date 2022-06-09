#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		x = 0;

		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	} else
		_putchar('\n');
}
