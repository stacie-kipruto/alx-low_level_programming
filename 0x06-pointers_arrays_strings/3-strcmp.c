#include "main.h"


/**
 * _strcmp - function that compares two strings.
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: an integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int i, output;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;
	output = (*(s1 + i) - *(s2 + i));

	return (output);
}
