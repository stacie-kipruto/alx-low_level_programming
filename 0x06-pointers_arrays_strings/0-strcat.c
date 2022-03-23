#include "main.h"

/**
 * _strcat - Will concatenate two strings
 * @dest: where our string will be copied into, destination
 * @src: this will be appended into the end of dest, source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
		b++;
	}

	a = 0;
	while (*(src + a) != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
