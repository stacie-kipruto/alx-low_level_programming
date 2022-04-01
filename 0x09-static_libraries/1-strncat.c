#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: destination of the string
 * @src: source of the string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	return (dest);
}
