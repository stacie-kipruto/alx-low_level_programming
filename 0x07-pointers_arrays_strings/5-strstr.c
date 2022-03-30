#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be found
 * Return: pointer to the beginning of the located substring
 * Null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0' ; haystack++)
	{
		char *n = haystack;
		char *m = needle;

	while (*n == *m && *m != '\0')
	{
		n++;
		m++;
	}
	if (*m == '\0')
		return (haystack);
	}
	return (0);
}
