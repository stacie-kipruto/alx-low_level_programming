#include "main.h"
/**
 * _memeset - a function that fills memory with a constant byte.
 * fills the first n bytes of the memory area pointed to s with constant b
 * @b: constant to fill the memory with.
 * @n: bytes of the memory area to be filled.
 * @s: pointer to the memory area.
 *
 * Return: pointer to the memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
