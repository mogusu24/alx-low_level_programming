#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src, including the
 * terminating null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *new_dest = dest;

	/* navigate to the end of dest */
	while (*dest)
		dest++;

	/* copy all characters of src to dest */
	while (*src)
		*dest++ = *src++;

	/* add terminating null byte */
	*dest = '\0';

	return (new_dest);
}
