#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
