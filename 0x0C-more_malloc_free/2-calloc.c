#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: size (in bytes) of each array element
 * Return: pointer to newly created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	return (calloc(nmemb, size));
}
