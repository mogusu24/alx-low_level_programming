#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	int z, y;

	if (size > 0)
	{
		for (z = 0; z < size; z++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
