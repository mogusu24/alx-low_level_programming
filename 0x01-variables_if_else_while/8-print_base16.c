#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:  a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	char ch;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
