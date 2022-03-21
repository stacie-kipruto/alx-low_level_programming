#include "main.h"
#include <string.h>

/**
 * _strlen - Returnd length of a string
 * @s: String variable
 * Return: no return
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
