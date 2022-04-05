#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a new string,
 * which is a duplicate of the string (str)
 * @str: pointer to the string being duplicated.
 *
 * Return: pointer to the duplicated string on success
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	else
		return (strdup(str));
}
