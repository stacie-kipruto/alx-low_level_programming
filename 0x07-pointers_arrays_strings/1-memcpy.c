#include "main.h"
/**
 * _memcpy - a function that copies bytes from memory area to another memory
 * @dest: destination
 * @src: source
 * @n: given number
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
