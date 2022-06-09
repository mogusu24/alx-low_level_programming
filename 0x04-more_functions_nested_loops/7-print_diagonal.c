#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
				{
					_putchar('\\');
				} else if (y < x)
					_putchar(' ');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
